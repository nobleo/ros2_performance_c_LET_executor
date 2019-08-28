#!/usr/bin/env python3
import os
from os.path import expanduser
import shutil
import glob
import math


def main():
  # Python vars
  nodes = 10                                               # Amount of nodes
  pubs_per_node = 2                                        # Amount of publishers per node
  topics = nodes*pubs_per_node                             # Total amount of topics in system
  subs_per_pub = 10                                        # Amount of subscribers per published topic

  publishers_per_callback = pubs_per_node                  # Amount of publishers in the same callback function
  #publishers_per_callback = 1
  if( publishers_per_callback > pubs_per_node ):           # Default = pubs_per_node -> results in 1 timer per node, all pubs triggered by 1 timer
    publishers_per_callback = pubs_per_node
    print("Can't have more publishers per callback function than publishers per node")

  # For each node instance
  timers = nodes*math.ceil(pubs_per_node/publishers_per_callback)
  publishers = (nodes*pubs_per_node)
  subscribers = (nodes*pubs_per_node)*subs_per_pub


  timer_timeout = 20                                        # Timer timeout in [ms]
  waitset_timeout = 100000000
  pub_message = '"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"'

  unique_sub_callback = False                               # Create a callback function for each subscriber if True else 1 generic callback function
  unique_pub_msg = False                                    # Create a pub_msg definition for each publisher if True else 1 generic message
  commented_code = False                                    # Generated code will have comments (True/False) TODO: add this functionality

  # Create output file and open
  print("Writing to temporary .txt file clean")
  temporary_file = open("temp.txt","w")

  ### CODE GENERATION STARTS HERE ###
  ## WRITE INLCUDES + GLOBAL VARIABLES ##
  #-----------------------------------------------------------------------------------------------------------#
  # Write includes to file
  includes = '''#include "rcl_executor/let_executor.h"
#include <unistd.h>
#include <geometry_msgs/msg/twist.h>
#include <std_msgs/msg/string.h>
#include <std_msgs/msg/int32.h>
'''
  temporary_file.write(includes +"\n")

  # Define global variables
  rcl_ret = "rcl_ret_t rc;"
  temporary_file.write(rcl_ret +"\n")

  if(unique_pub_msg):
    for pub_iter in range(publishers):
      unique_pub_msg = "std_msgs__msg__String pub_<index>_msg;"
      temporary_file.write(unique_pub_msg.replace("<index>",str(pub_iter)) +"\n")
  else:
    generic_pub_msg = "std_msgs__msg__String pub_msg;"
    temporary_file.write(generic_pub_msg +"\n")

  # Define publishers
  pub_def = "rcl_publisher_t pub_<index>;\n"
  for pub_iter in range(publishers):
    temporary_file.write( pub_def.replace("<index>", str(pub_iter)))

  temporary_file.write("\n")
  ## WRITE CALLBACK FUNCTIONS ##
  #-----------------------------------------------------------------------------------------------------------#
  # Create timer callbacks  TODO: work with pubs per node
  timer_callback_start = "void timer_<index>_callback(rcl_timer_t * timer, int64_t last_call_time)\n\
{\n"
  publish_command = "  rc = rcl_publish(&pub_<index>, &pub_msg, NULL);\n"
  timer_callback_end = "}\n\n"
  callback_index = 0
  number_of_timers_per_node = math.ceil(pubs_per_node/publishers_per_callback)
  pub_index = 0
  for node_iter in range(nodes):
    pub_pool = pubs_per_node
    for timer_iter in range(number_of_timers_per_node):
      temporary_file.write( timer_callback_start.replace("<index>", str(callback_index)))
      callback_index = callback_index+1
      for pub_iter in range(publishers_per_callback):
        if (pub_pool > 0):
          temporary_file.write( publish_command.replace("<index>", str(pub_index)) )
          pub_index = pub_index+1
          pub_pool = pub_pool-1
      temporary_file.write( timer_callback_end )

  # Create subscription callbacks
  if(unique_sub_callback):
    unique_callback ='''void sub_<index>_callback(const void * msgin){
}
'''
    for sub_iter in range(subscribers):
      temporary_file.write(unique_callback.replace("<index>", str(sub_iter)))
  else:
    generic_callback ='''void sub_callback(const void * msgin){
  usleep(1);
}
'''
    temporary_file.write(generic_callback)

  temporary_file.write("\n")
  ## WRITE MAIN FUNCTION ##
  #-----------------------------------------------------------------------------------------------------------#
  # Start main function
  main_print_start = '''int main(int argc, const char * argv[])
{
  rcl_context_t context;
  rcl_init_options_t init_options;
  rcl_clock_t clock;

  rcl_allocator_t allocator = rcl_get_default_allocator();
  context = rcl_get_zero_initialized_context();
  init_options = rcl_get_zero_initialized_init_options();

  rc = rcl_init_options_init(&init_options, rcl_get_default_allocator());
  if (rc != RCL_RET_OK) {
    PRINT_RCL_ERROR(rt_executor, rcl_init_options_init);
    return -1;
  }
  rc = rcl_init(argc, argv, &init_options, &context);
  if (rc != RCL_RET_OK) {
    PRINT_RCL_ERROR(init, rcl_init);
    return -1;
  }
  rc = rcl_init_options_fini(&init_options);

  const unsigned int timer_timeout = <timer_timeout>;

'''
  temporary_file.write(main_print_start.replace("<timer_timeout>",str(timer_timeout)))

  # Add default node options
  generic_node_options = '  rcl_node_options_t node_ops = rcl_node_get_default_options();\n'
  temporary_file.write(generic_node_options)

  temporary_file.write("\n")
  # Add default clock
  clock_init = '  rc = rcl_clock_init(RCL_STEADY_TIME, &clock, &allocator);\n'
  temporary_file.write(clock_init)

  temporary_file.write("\n")
  # Add default publisher options
  default_pub_ops = '''  rcl_publisher_options_t pub_opt = rcl_publisher_get_default_options();
  const rosidl_message_type_support_t * pub_type_support = ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs,msg,String);\n'''
  temporary_file.write(default_pub_ops)

  temporary_file.write("\n")
  # Add default subscriber options
  default_sub_ops = '''  rcl_subscription_options_t subscription_ops = rcl_subscription_get_default_options();
  const rosidl_message_type_support_t * sub_type_support = ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String);\n'''
  temporary_file.write(default_sub_ops)

  temporary_file.write("\n")
  # Add executor
  exe = '''  rcle_let_executor_t exe;
  rcle_let_executor_init(&exe, &context, <size>, &allocator);\n'''
  temporary_file.write(exe.replace("<size>", str(subscribers+timers)))

  temporary_file.write("\n")
  # Create topics
  for topic_iter in range(topics):
    topic = '  const char * topic_<index> = "topic_<index>";\n'
    temporary_file.write(topic.replace("<index>",str(topic_iter)))

  temporary_file.write("\n")
  # Create sub_msgs
  for sub_iter in range(subscribers):
    sub_msg = '  std_msgs__msg__String sub_msg_<index>;\n'
    temporary_file.write(sub_msg.replace("<index>",str(sub_iter)))

  temporary_file.write("\n")
  # Create pub_msgs
  if(unique_pub_msg):
    for pub_iter in range(publishers):
      pub_msg_init = '  std_msgs__msg__String__init(&pub_msg_<index>);\n'
      temporary_file.write( pub_msg_init.replace("<index>", str(pub_iter)) )

    temporary_file.write("\n")
    for pub_iter in range(publishers):
      pub_msg_alloc= '  rosidl_generator_c__String__assignn(&pub_msg_<index>, <pub_message_content>, <pub_message_size>);\n'
      temporary_file.write( pub_msg_alloc.replace("<index>", str(pub_iter)).replace( "<pub_message_content>", str(pub_message)).replace("<pub_message_size>", str(len(pub_message))))

  else:
    pub_msg_init = '  std_msgs__msg__String__init(&pub_msg);\n'
    pub_msg_alloc= '  rosidl_generator_c__String__assignn(&pub_msg, <pub_message_content>, <pub_message_size>);\n'
    temporary_file.write( pub_msg_init)
    temporary_file.write( pub_msg_alloc.replace( "<pub_message_content>", str(pub_message)).replace("<pub_message_size>", str(len(pub_message)-2)))

  temporary_file.write("\n")

  temporary_file.write("//____________________________________START_OF_NODES____________________________________\n")
  # Add nodes
  timer_pool = timers
  pub_pool = publishers
  sub_pool = subscribers

  for node_iter in range(nodes):
    node_zero_init = '  rcl_node_t node_<index> = rcl_get_zero_initialized_node();\n'
    temporary_file.write(node_zero_init.replace("<index>",str(node_iter)))

  temporary_file.write("\n")
  timer_index = 0
  sub_index = 0
  pub_index = 0
  for node_iter in range(nodes):
    temporary_file.write("//_____________________________________NODE_DIVIDER_____________________________________\n")
    node_init = '  rc = rcl_node_init(&node_<index>, "node_<index>", "", &context, &node_ops);\n'
    temporary_file.write(node_init.replace("<index>",str(node_iter)))

    temporary_file.write("\n")
    # Add timer
    number_of_needed_timers = math.ceil(pubs_per_node/publishers_per_callback)
    for timer_iter in range(number_of_needed_timers):
      timer_zero_init = '  rcl_timer_t timer_<index> = rcl_get_zero_initialized_timer();\n'
      temporary_file.write(timer_zero_init.replace("<index>", str(timer_iter+timer_index)))

    temporary_file.write("\n")
    for timer_iter in range(number_of_needed_timers):
      timer_init = '  rc = rcl_timer_init(&timer_<index>, &clock, &context, RCL_MS_TO_NS(timer_timeout), timer_<index>_callback, allocator);\n'
      temporary_file.write(timer_init.replace("<index>", str(timer_iter+timer_index)))

    timer_index = timer_index + number_of_needed_timers

    temporary_file.write("\n")
    # Add publishers
    for pub_iter in range(pubs_per_node):
      pub_zero_init = '  pub_<index> = rcl_get_zero_initialized_publisher();\n'
      temporary_file.write(pub_zero_init.replace("<index>",str(pub_iter+pub_index)))

    temporary_file.write("\n")
    for pub_iter in range(pubs_per_node):
      pub_init = '  rc = rcl_publisher_init(&pub_<pub_index>, &node_<node_index>, pub_type_support, topic_<topic_index>, &pub_opt);\n'
      temporary_file.write( pub_init.replace("<pub_index>",str(pub_iter + pub_index) ).replace("<node_index>", str(node_iter)).replace("<topic_index>",str(pub_iter + pub_index) ))

    pub_index = pub_index+pubs_per_node

    temporary_file.write("\n")
    # Add subscriptions
    start_index = subscribers-sub_pool
    for sub_iter in range(pubs_per_node*subs_per_pub):
      sub_zero_init = '  rcl_subscription_t sub_<index> = rcl_get_zero_initialized_subscription();\n'
      temporary_file.write(sub_zero_init.replace("<index>",str(sub_iter + start_index)))

    temporary_file.write("\n")
    for sub_iter in range(pubs_per_node*subs_per_pub):
      sub_init = '  rc = rcl_subscription_init(&sub_<sub_index>, &node_<node_index>, sub_type_support, topic_<topic_index>, &subscription_ops);\n'
      temporary_file.write( sub_init.replace("<sub_index>",str(sub_iter + start_index) ).replace("<node_index>", str(node_iter)).replace("<topic_index>",str((sub_index + sub_iter)%topics)) )
      sub_pool = sub_pool-1
    sub_index = (sub_index+1 + sub_iter)%topics
  temporary_file.write("//___________________________________END_OF_NODES_LIST__________________________________\n")

  temporary_file.write("\n")
  # Add timer to executable
  for timer_exe_iter in range(timers):
    timer_exe = '  rcle_let_executor_add_timer(&exe, &timer_<index>);\n'
    temporary_file.write( timer_exe.replace("<index>",str(timer_exe_iter)))

  temporary_file.write("\n")
  # Add subscribers to executable
  if(unique_sub_callback):
    for sub_exe_iter in range(subscribers):
      sub_exe = '  rc = rcle_let_executor_add_subscription(&exe, &sub_<index>, &sub_msg_<index>, &sub_<index>_callback, ON_NEW_DATA);\n'
      temporary_file.write( sub_exe.replace("<index>",str(sub_exe_iter)))
  else:
    for sub_exe_iter in range(subscribers):
      sub_exe = '  rc = rcle_let_executor_add_subscription(&exe, &sub_<index>, &sub_msg_<index>, &sub_callback, ON_NEW_DATA);\n'
      temporary_file.write( sub_exe.replace("<index>",str(sub_exe_iter)))

  temporary_file.write("\n")
  # Add waitset timeout
  waitset_timeout_exe = '  rc = rcle_let_executor_set_timeout(&exe, <waitset_timeout>);\n'
  temporary_file.write( waitset_timeout_exe.replace("<waitset_timeout>", str(waitset_timeout)))

  temporary_file.write("\n")
  # Add executor spin
  spin_exe = '  rcle_let_executor_spin(&exe);\n'
  temporary_file.write(spin_exe)

  temporary_file.write("\n")
  # Add clean up for executor
  let_exe_fini = '  rcle_let_executor_fini(&exe);\n'
  temporary_file.write(let_exe_fini)

  temporary_file.write("\n")
  # Add clean up for subscribers
  for node_iter in range(nodes):
    for sub_iter in range(pubs_per_node*subs_per_pub):
      sub_fini = '  rc = rcl_subscription_fini(&sub_<sub_index>, &node_<node_index>);\n'
      temporary_file.write(sub_fini.replace("<sub_index>",str(sub_iter+(node_iter*(pubs_per_node*subs_per_pub)) )).replace("<node_index>",str(node_iter)))

  temporary_file.write("\n")
  # Add clean up for timers
  number_of_needed_timers = math.ceil(pubs_per_node/publishers_per_callback)
  for node_iter in range(nodes):
    for timer_iter in range(number_of_needed_timers):
      timer_fini = '  rc = rcl_timer_fini(&timer_<index>);\n'
      temporary_file.write(timer_fini.replace("<index>", str(timer_iter+node_iter*number_of_needed_timers)))

  temporary_file.write("\n")
  # Add clean up for nodes
  for node_iter in range(nodes):
    node_fini = '  rc = rcl_node_fini(&node_<index>);\n'
    temporary_file.write(node_fini.replace("<index>", str(node_iter)))

  # End main function
  main_print_end= "}"
  temporary_file.write(main_print_end)
  temporary_file.close()

if __name__== "__main__":
  main()
