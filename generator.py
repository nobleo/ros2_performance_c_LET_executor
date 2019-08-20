#!/usr/bin/env python3
import os
from os.path import expanduser
import shutil
import glob


def main():
  t = 20;
  n = 10;
  print("Writing to temporary .txt file clean")
  temporary_file = open("temp.txt","w")

  # Define publishers
  pub_def = "rcl_publisher_t pub_1;\n"
  for x in range(t):
    temporary_file.write( pub_def.replace( "1" , str(x) ) );

  temporary_file.write("\n")
  # Create timer callbacks
  timer_callback='''
void timer_<number>_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  if (timer != NULL) {
    printf("Timer: time since last call %d\\n", (int) last_call_time);
  }
  i++;
  printf("Publishing: %s\\n", pub_msg.data.data);
  rc = rcl_publish(&pub_<index>, &pub_msg, NULL);
  rc = rcl_publish(&pub_1<index>, &pub_msg, NULL);
}
'''
  for y in range(n):
    temporary_file.write( timer_callback.replace("<number>",str(y)).replace("<index>",str(y)) )

  temporary_file.write("\n")
  # Create subscription callbacks
  sub_callback = '''
void sub_<number>_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_<number>_callback msg NULL\\n");
  } else {
    printf("sub_<number>_callback': I heard: %s\\n", msg->data.data);
  }
}
'''
  for x in range(t):
    for y in range(n):
      temporary_file.write( sub_callback.replace("<number>", str(x)+str(y)))

  temporary_file.write("\n")
  # Create topics
  topic = '  const char * sub_topic_1 = "topic_1";\n'
  for x in range(t):
    temporary_file.write( topic.replace("1",str(x)))

  temporary_file.write("\n")
  # Create subscriptions
  create_sub = '''
    rcl_subscription_t sub_1 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg1;
    rc = rcl_subscription_init(
      &sub_1,
      &node,
      sub_type_support,
      sub_topic_1,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\\n", sub_topic_1);
      return -1;
    }
    else {
      printf("Created subscriber %s:\\n", sub_topic_1);
    }
'''
  for x in range(t):
    for y in range(n):
      temporary_file.write( create_sub.replace( "topic_1","topic_"+str(x) ).replace("sub_1", "sub_"+str(x)+str(y)).replace("sub_msg1","sub_msg"+str(x)+str(y) ))

  temporary_file.write("\n")
  # Create publish topics
  topic = '  const char * pub_topic_1 = "topic_1";\n'
  for x in range(t):
    temporary_file.write( topic.replace("1",str(x)))

  temporary_file.write("\n")
  # Add default options for pub
  default_pub_options = '''
    const rosidl_message_type_support_t * pub_type_support = ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs,
        msg,
        String);
    rcl_publisher_options_t pub_opt = rcl_publisher_get_default_options();
'''
  temporary_file.write(default_pub_options)

  temporary_file.write("\n")
  # Create publishers
  create_pub = '''
    pub_1        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_1,
        &node,
        pub_type_support,
        pub_topic_1,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\\n", pub_topic_1);
        return -1;
    } else {
        printf("Created publisher: %s\\n", pub_topic_1);
    }
'''
  for x in range(t):
      temporary_file.write( create_pub.replace("topic_1","topic_"+str(x)).replace("pub_1", "pub_"+str(x)) )
  temporary_file.write("\n")

  # Set clock and timeout for all timers
  timeout= "    const unsigned int timer_timeout = 20;\n";
  clock= '''
    rcl_clock_t clock;
    rcl_allocator_t allocator = rcl_get_default_allocator();
    rc = rcl_clock_init(RCL_STEADY_TIME, &clock, &allocator);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_timer, rcl_clock_init);
      return -1;
    }
'''
  temporary_file.write(timeout);
  temporary_file.write(clock);

  temporary_file.write("\n")
  # Create timers
  timer= '''
    rcl_timer_t timer1 = rcl_get_zero_initialized_timer();
    rc = rcl_timer_init(&timer1, &clock, &context, RCL_MS_TO_NS(timer_timeout),
        timer_1_callback, allocator);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_timer, rcl_timer_init);
      return -1;
    } else {
      printf("Created timer1 with timeout %d ms.\\n", timer_timeout);
    }
'''
  for y in range(n):
    temporary_file.write( timer.replace( "timer1" , "timer"+str(y) ).replace("timer_1_callback", "timer_"+str(y)+"_callback") );

  temporary_file.write("\n")
  # Add subscriptions to executor
  add_sub = '''    rc = rcle_let_executor_add_subscription(&exe, &sub_1, &sub_msg1, &sub_1_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}\n'''
  for x in range(t):
    for y in range(n):
      temporary_file.write(add_sub.replace("sub_1", "sub_"+str(x)+str(y)).replace("sub_msg1","sub_msg"+str(x)+str(y)).replace("sub_1_callback", "sub_"+str(x)+str(y)+"_callback"))

  temporary_file.write("\n")
  # Add timer to executor
  add_timer='''    rcle_let_executor_add_timer(&exe, &timer<number>);
    if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_timer);}\n'''
  for y in range(n):
    temporary_file.write(add_timer.replace("<number>", str(y)))

  temporary_file.write("\n")
  # Destroy subscribers
  fini_sub = "    rc = rcl_subscription_fini(&sub_1, &node);\n"
  for x in range(t):
    for y in range(n):
      temporary_file.write(fini_sub.replace("1", str(x)+str(y)))

  temporary_file.write("\n")
  # Destroy timers
  fini_timer="    rc = rcl_timer_fini(&timer1);\n"
  for y in range(n):
    temporary_file.write(fini_timer.replace("1", str(y)))

  temporary_file.write("\n")
  temporary_file.close()

if __name__== "__main__":
  main()
