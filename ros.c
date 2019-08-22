#include "rcl_executor/let_executor.h"
#include <unistd.h>
#include <geometry_msgs/msg/twist.h>
#include <std_msgs/msg/string.h>
#include <std_msgs/msg/int32.h>

rcl_ret_t rc;
std_msgs__msg__String pub_msg;
rcl_publisher_t pub_0;
rcl_publisher_t pub_1;
rcl_publisher_t pub_2;
rcl_publisher_t pub_3;
rcl_publisher_t pub_4;
rcl_publisher_t pub_5;
rcl_publisher_t pub_6;
rcl_publisher_t pub_7;
rcl_publisher_t pub_8;
rcl_publisher_t pub_9;
rcl_publisher_t pub_10;
rcl_publisher_t pub_11;
rcl_publisher_t pub_12;
rcl_publisher_t pub_13;
rcl_publisher_t pub_14;
rcl_publisher_t pub_15;
rcl_publisher_t pub_16;
rcl_publisher_t pub_17;
rcl_publisher_t pub_18;
rcl_publisher_t pub_19;

void timer_0_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rc = rcl_publish(&pub_0, &pub_msg, NULL);
  rc = rcl_publish(&pub_1, &pub_msg, NULL);
}

void timer_1_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rc = rcl_publish(&pub_2, &pub_msg, NULL);
  rc = rcl_publish(&pub_3, &pub_msg, NULL);
}

void timer_2_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rc = rcl_publish(&pub_4, &pub_msg, NULL);
  rc = rcl_publish(&pub_5, &pub_msg, NULL);
}

void timer_3_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rc = rcl_publish(&pub_6, &pub_msg, NULL);
  rc = rcl_publish(&pub_7, &pub_msg, NULL);
}

void timer_4_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rc = rcl_publish(&pub_8, &pub_msg, NULL);
  rc = rcl_publish(&pub_9, &pub_msg, NULL);
}

void timer_5_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rc = rcl_publish(&pub_10, &pub_msg, NULL);
  rc = rcl_publish(&pub_11, &pub_msg, NULL);
}

void timer_6_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rc = rcl_publish(&pub_12, &pub_msg, NULL);
  rc = rcl_publish(&pub_13, &pub_msg, NULL);
}

void timer_7_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rc = rcl_publish(&pub_14, &pub_msg, NULL);
  rc = rcl_publish(&pub_15, &pub_msg, NULL);
}

void timer_8_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rc = rcl_publish(&pub_16, &pub_msg, NULL);
  rc = rcl_publish(&pub_17, &pub_msg, NULL);
}

void timer_9_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rc = rcl_publish(&pub_18, &pub_msg, NULL);
  rc = rcl_publish(&pub_19, &pub_msg, NULL);
}

void sub_callback(const void * msgin){
  usleep(1);
}

int main(int argc, const char * argv[])
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

  const unsigned int timer_timeout = 20;

  rcl_node_options_t node_ops = rcl_node_get_default_options();

  rc = rcl_clock_init(RCL_STEADY_TIME, &clock, &allocator);

  rcl_publisher_options_t pub_opt = rcl_publisher_get_default_options();
  const rosidl_message_type_support_t * pub_type_support = ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs,msg,String);

  rcl_subscription_options_t subscription_ops = rcl_subscription_get_default_options();
  const rosidl_message_type_support_t * sub_type_support = ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String);

  rcle_let_executor_t exe;
  rcle_let_executor_init(&exe, &context, 210, &allocator);

  const char * topic_0 = "topic_0";
  const char * topic_1 = "topic_1";
  const char * topic_2 = "topic_2";
  const char * topic_3 = "topic_3";
  const char * topic_4 = "topic_4";
  const char * topic_5 = "topic_5";
  const char * topic_6 = "topic_6";
  const char * topic_7 = "topic_7";
  const char * topic_8 = "topic_8";
  const char * topic_9 = "topic_9";
  const char * topic_10 = "topic_10";
  const char * topic_11 = "topic_11";
  const char * topic_12 = "topic_12";
  const char * topic_13 = "topic_13";
  const char * topic_14 = "topic_14";
  const char * topic_15 = "topic_15";
  const char * topic_16 = "topic_16";
  const char * topic_17 = "topic_17";
  const char * topic_18 = "topic_18";
  const char * topic_19 = "topic_19";

  std_msgs__msg__String sub_msg_0;
  std_msgs__msg__String sub_msg_1;
  std_msgs__msg__String sub_msg_2;
  std_msgs__msg__String sub_msg_3;
  std_msgs__msg__String sub_msg_4;
  std_msgs__msg__String sub_msg_5;
  std_msgs__msg__String sub_msg_6;
  std_msgs__msg__String sub_msg_7;
  std_msgs__msg__String sub_msg_8;
  std_msgs__msg__String sub_msg_9;
  std_msgs__msg__String sub_msg_10;
  std_msgs__msg__String sub_msg_11;
  std_msgs__msg__String sub_msg_12;
  std_msgs__msg__String sub_msg_13;
  std_msgs__msg__String sub_msg_14;
  std_msgs__msg__String sub_msg_15;
  std_msgs__msg__String sub_msg_16;
  std_msgs__msg__String sub_msg_17;
  std_msgs__msg__String sub_msg_18;
  std_msgs__msg__String sub_msg_19;
  std_msgs__msg__String sub_msg_20;
  std_msgs__msg__String sub_msg_21;
  std_msgs__msg__String sub_msg_22;
  std_msgs__msg__String sub_msg_23;
  std_msgs__msg__String sub_msg_24;
  std_msgs__msg__String sub_msg_25;
  std_msgs__msg__String sub_msg_26;
  std_msgs__msg__String sub_msg_27;
  std_msgs__msg__String sub_msg_28;
  std_msgs__msg__String sub_msg_29;
  std_msgs__msg__String sub_msg_30;
  std_msgs__msg__String sub_msg_31;
  std_msgs__msg__String sub_msg_32;
  std_msgs__msg__String sub_msg_33;
  std_msgs__msg__String sub_msg_34;
  std_msgs__msg__String sub_msg_35;
  std_msgs__msg__String sub_msg_36;
  std_msgs__msg__String sub_msg_37;
  std_msgs__msg__String sub_msg_38;
  std_msgs__msg__String sub_msg_39;
  std_msgs__msg__String sub_msg_40;
  std_msgs__msg__String sub_msg_41;
  std_msgs__msg__String sub_msg_42;
  std_msgs__msg__String sub_msg_43;
  std_msgs__msg__String sub_msg_44;
  std_msgs__msg__String sub_msg_45;
  std_msgs__msg__String sub_msg_46;
  std_msgs__msg__String sub_msg_47;
  std_msgs__msg__String sub_msg_48;
  std_msgs__msg__String sub_msg_49;
  std_msgs__msg__String sub_msg_50;
  std_msgs__msg__String sub_msg_51;
  std_msgs__msg__String sub_msg_52;
  std_msgs__msg__String sub_msg_53;
  std_msgs__msg__String sub_msg_54;
  std_msgs__msg__String sub_msg_55;
  std_msgs__msg__String sub_msg_56;
  std_msgs__msg__String sub_msg_57;
  std_msgs__msg__String sub_msg_58;
  std_msgs__msg__String sub_msg_59;
  std_msgs__msg__String sub_msg_60;
  std_msgs__msg__String sub_msg_61;
  std_msgs__msg__String sub_msg_62;
  std_msgs__msg__String sub_msg_63;
  std_msgs__msg__String sub_msg_64;
  std_msgs__msg__String sub_msg_65;
  std_msgs__msg__String sub_msg_66;
  std_msgs__msg__String sub_msg_67;
  std_msgs__msg__String sub_msg_68;
  std_msgs__msg__String sub_msg_69;
  std_msgs__msg__String sub_msg_70;
  std_msgs__msg__String sub_msg_71;
  std_msgs__msg__String sub_msg_72;
  std_msgs__msg__String sub_msg_73;
  std_msgs__msg__String sub_msg_74;
  std_msgs__msg__String sub_msg_75;
  std_msgs__msg__String sub_msg_76;
  std_msgs__msg__String sub_msg_77;
  std_msgs__msg__String sub_msg_78;
  std_msgs__msg__String sub_msg_79;
  std_msgs__msg__String sub_msg_80;
  std_msgs__msg__String sub_msg_81;
  std_msgs__msg__String sub_msg_82;
  std_msgs__msg__String sub_msg_83;
  std_msgs__msg__String sub_msg_84;
  std_msgs__msg__String sub_msg_85;
  std_msgs__msg__String sub_msg_86;
  std_msgs__msg__String sub_msg_87;
  std_msgs__msg__String sub_msg_88;
  std_msgs__msg__String sub_msg_89;
  std_msgs__msg__String sub_msg_90;
  std_msgs__msg__String sub_msg_91;
  std_msgs__msg__String sub_msg_92;
  std_msgs__msg__String sub_msg_93;
  std_msgs__msg__String sub_msg_94;
  std_msgs__msg__String sub_msg_95;
  std_msgs__msg__String sub_msg_96;
  std_msgs__msg__String sub_msg_97;
  std_msgs__msg__String sub_msg_98;
  std_msgs__msg__String sub_msg_99;
  std_msgs__msg__String sub_msg_100;
  std_msgs__msg__String sub_msg_101;
  std_msgs__msg__String sub_msg_102;
  std_msgs__msg__String sub_msg_103;
  std_msgs__msg__String sub_msg_104;
  std_msgs__msg__String sub_msg_105;
  std_msgs__msg__String sub_msg_106;
  std_msgs__msg__String sub_msg_107;
  std_msgs__msg__String sub_msg_108;
  std_msgs__msg__String sub_msg_109;
  std_msgs__msg__String sub_msg_110;
  std_msgs__msg__String sub_msg_111;
  std_msgs__msg__String sub_msg_112;
  std_msgs__msg__String sub_msg_113;
  std_msgs__msg__String sub_msg_114;
  std_msgs__msg__String sub_msg_115;
  std_msgs__msg__String sub_msg_116;
  std_msgs__msg__String sub_msg_117;
  std_msgs__msg__String sub_msg_118;
  std_msgs__msg__String sub_msg_119;
  std_msgs__msg__String sub_msg_120;
  std_msgs__msg__String sub_msg_121;
  std_msgs__msg__String sub_msg_122;
  std_msgs__msg__String sub_msg_123;
  std_msgs__msg__String sub_msg_124;
  std_msgs__msg__String sub_msg_125;
  std_msgs__msg__String sub_msg_126;
  std_msgs__msg__String sub_msg_127;
  std_msgs__msg__String sub_msg_128;
  std_msgs__msg__String sub_msg_129;
  std_msgs__msg__String sub_msg_130;
  std_msgs__msg__String sub_msg_131;
  std_msgs__msg__String sub_msg_132;
  std_msgs__msg__String sub_msg_133;
  std_msgs__msg__String sub_msg_134;
  std_msgs__msg__String sub_msg_135;
  std_msgs__msg__String sub_msg_136;
  std_msgs__msg__String sub_msg_137;
  std_msgs__msg__String sub_msg_138;
  std_msgs__msg__String sub_msg_139;
  std_msgs__msg__String sub_msg_140;
  std_msgs__msg__String sub_msg_141;
  std_msgs__msg__String sub_msg_142;
  std_msgs__msg__String sub_msg_143;
  std_msgs__msg__String sub_msg_144;
  std_msgs__msg__String sub_msg_145;
  std_msgs__msg__String sub_msg_146;
  std_msgs__msg__String sub_msg_147;
  std_msgs__msg__String sub_msg_148;
  std_msgs__msg__String sub_msg_149;
  std_msgs__msg__String sub_msg_150;
  std_msgs__msg__String sub_msg_151;
  std_msgs__msg__String sub_msg_152;
  std_msgs__msg__String sub_msg_153;
  std_msgs__msg__String sub_msg_154;
  std_msgs__msg__String sub_msg_155;
  std_msgs__msg__String sub_msg_156;
  std_msgs__msg__String sub_msg_157;
  std_msgs__msg__String sub_msg_158;
  std_msgs__msg__String sub_msg_159;
  std_msgs__msg__String sub_msg_160;
  std_msgs__msg__String sub_msg_161;
  std_msgs__msg__String sub_msg_162;
  std_msgs__msg__String sub_msg_163;
  std_msgs__msg__String sub_msg_164;
  std_msgs__msg__String sub_msg_165;
  std_msgs__msg__String sub_msg_166;
  std_msgs__msg__String sub_msg_167;
  std_msgs__msg__String sub_msg_168;
  std_msgs__msg__String sub_msg_169;
  std_msgs__msg__String sub_msg_170;
  std_msgs__msg__String sub_msg_171;
  std_msgs__msg__String sub_msg_172;
  std_msgs__msg__String sub_msg_173;
  std_msgs__msg__String sub_msg_174;
  std_msgs__msg__String sub_msg_175;
  std_msgs__msg__String sub_msg_176;
  std_msgs__msg__String sub_msg_177;
  std_msgs__msg__String sub_msg_178;
  std_msgs__msg__String sub_msg_179;
  std_msgs__msg__String sub_msg_180;
  std_msgs__msg__String sub_msg_181;
  std_msgs__msg__String sub_msg_182;
  std_msgs__msg__String sub_msg_183;
  std_msgs__msg__String sub_msg_184;
  std_msgs__msg__String sub_msg_185;
  std_msgs__msg__String sub_msg_186;
  std_msgs__msg__String sub_msg_187;
  std_msgs__msg__String sub_msg_188;
  std_msgs__msg__String sub_msg_189;
  std_msgs__msg__String sub_msg_190;
  std_msgs__msg__String sub_msg_191;
  std_msgs__msg__String sub_msg_192;
  std_msgs__msg__String sub_msg_193;
  std_msgs__msg__String sub_msg_194;
  std_msgs__msg__String sub_msg_195;
  std_msgs__msg__String sub_msg_196;
  std_msgs__msg__String sub_msg_197;
  std_msgs__msg__String sub_msg_198;
  std_msgs__msg__String sub_msg_199;

  std_msgs__msg__String__init(&pub_msg);
  rosidl_generator_c__String__assignn(&pub_msg, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 68);

//____________________________________START_OF_NODES____________________________________
  rcl_node_t node_0 = rcl_get_zero_initialized_node();
  rcl_node_t node_1 = rcl_get_zero_initialized_node();
  rcl_node_t node_2 = rcl_get_zero_initialized_node();
  rcl_node_t node_3 = rcl_get_zero_initialized_node();
  rcl_node_t node_4 = rcl_get_zero_initialized_node();
  rcl_node_t node_5 = rcl_get_zero_initialized_node();
  rcl_node_t node_6 = rcl_get_zero_initialized_node();
  rcl_node_t node_7 = rcl_get_zero_initialized_node();
  rcl_node_t node_8 = rcl_get_zero_initialized_node();
  rcl_node_t node_9 = rcl_get_zero_initialized_node();

//_____________________________________NODE_DIVIDER_____________________________________
  rc = rcl_node_init(&node_0, "node_0", "", &context, &node_ops);

  rcl_timer_t timer_0 = rcl_get_zero_initialized_timer();

  rc = rcl_timer_init(&timer_0, &clock, &context, RCL_MS_TO_NS(timer_timeout), timer_0_callback, allocator);

  pub_0 = rcl_get_zero_initialized_publisher();
  pub_1 = rcl_get_zero_initialized_publisher();

  rc = rcl_publisher_init(&pub_0, &node_0, pub_type_support, topic_0, &pub_opt);
  rc = rcl_publisher_init(&pub_1, &node_0, pub_type_support, topic_1, &pub_opt);

  rcl_subscription_t sub_0 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_1 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_2 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_3 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_4 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_5 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_6 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_7 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_8 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_9 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_10 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_11 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_12 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_13 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_14 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_15 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_16 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_17 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_18 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_19 = rcl_get_zero_initialized_subscription();

  rc = rcl_subscription_init(&sub_0, &node_0, sub_type_support, topic_0, &subscription_ops);
  rc = rcl_subscription_init(&sub_1, &node_0, sub_type_support, topic_1, &subscription_ops);
  rc = rcl_subscription_init(&sub_2, &node_0, sub_type_support, topic_2, &subscription_ops);
  rc = rcl_subscription_init(&sub_3, &node_0, sub_type_support, topic_3, &subscription_ops);
  rc = rcl_subscription_init(&sub_4, &node_0, sub_type_support, topic_4, &subscription_ops);
  rc = rcl_subscription_init(&sub_5, &node_0, sub_type_support, topic_5, &subscription_ops);
  rc = rcl_subscription_init(&sub_6, &node_0, sub_type_support, topic_6, &subscription_ops);
  rc = rcl_subscription_init(&sub_7, &node_0, sub_type_support, topic_7, &subscription_ops);
  rc = rcl_subscription_init(&sub_8, &node_0, sub_type_support, topic_8, &subscription_ops);
  rc = rcl_subscription_init(&sub_9, &node_0, sub_type_support, topic_9, &subscription_ops);
  rc = rcl_subscription_init(&sub_10, &node_0, sub_type_support, topic_10, &subscription_ops);
  rc = rcl_subscription_init(&sub_11, &node_0, sub_type_support, topic_11, &subscription_ops);
  rc = rcl_subscription_init(&sub_12, &node_0, sub_type_support, topic_12, &subscription_ops);
  rc = rcl_subscription_init(&sub_13, &node_0, sub_type_support, topic_13, &subscription_ops);
  rc = rcl_subscription_init(&sub_14, &node_0, sub_type_support, topic_14, &subscription_ops);
  rc = rcl_subscription_init(&sub_15, &node_0, sub_type_support, topic_15, &subscription_ops);
  rc = rcl_subscription_init(&sub_16, &node_0, sub_type_support, topic_16, &subscription_ops);
  rc = rcl_subscription_init(&sub_17, &node_0, sub_type_support, topic_17, &subscription_ops);
  rc = rcl_subscription_init(&sub_18, &node_0, sub_type_support, topic_18, &subscription_ops);
  rc = rcl_subscription_init(&sub_19, &node_0, sub_type_support, topic_19, &subscription_ops);
//_____________________________________NODE_DIVIDER_____________________________________
  rc = rcl_node_init(&node_1, "node_1", "", &context, &node_ops);

  rcl_timer_t timer_1 = rcl_get_zero_initialized_timer();

  rc = rcl_timer_init(&timer_1, &clock, &context, RCL_MS_TO_NS(timer_timeout), timer_1_callback, allocator);

  pub_2 = rcl_get_zero_initialized_publisher();
  pub_3 = rcl_get_zero_initialized_publisher();

  rc = rcl_publisher_init(&pub_2, &node_1, pub_type_support, topic_2, &pub_opt);
  rc = rcl_publisher_init(&pub_3, &node_1, pub_type_support, topic_3, &pub_opt);

  rcl_subscription_t sub_20 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_21 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_22 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_23 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_24 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_25 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_26 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_27 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_28 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_29 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_30 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_31 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_32 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_33 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_34 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_35 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_36 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_37 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_38 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_39 = rcl_get_zero_initialized_subscription();

  rc = rcl_subscription_init(&sub_20, &node_1, sub_type_support, topic_0, &subscription_ops);
  rc = rcl_subscription_init(&sub_21, &node_1, sub_type_support, topic_1, &subscription_ops);
  rc = rcl_subscription_init(&sub_22, &node_1, sub_type_support, topic_2, &subscription_ops);
  rc = rcl_subscription_init(&sub_23, &node_1, sub_type_support, topic_3, &subscription_ops);
  rc = rcl_subscription_init(&sub_24, &node_1, sub_type_support, topic_4, &subscription_ops);
  rc = rcl_subscription_init(&sub_25, &node_1, sub_type_support, topic_5, &subscription_ops);
  rc = rcl_subscription_init(&sub_26, &node_1, sub_type_support, topic_6, &subscription_ops);
  rc = rcl_subscription_init(&sub_27, &node_1, sub_type_support, topic_7, &subscription_ops);
  rc = rcl_subscription_init(&sub_28, &node_1, sub_type_support, topic_8, &subscription_ops);
  rc = rcl_subscription_init(&sub_29, &node_1, sub_type_support, topic_9, &subscription_ops);
  rc = rcl_subscription_init(&sub_30, &node_1, sub_type_support, topic_10, &subscription_ops);
  rc = rcl_subscription_init(&sub_31, &node_1, sub_type_support, topic_11, &subscription_ops);
  rc = rcl_subscription_init(&sub_32, &node_1, sub_type_support, topic_12, &subscription_ops);
  rc = rcl_subscription_init(&sub_33, &node_1, sub_type_support, topic_13, &subscription_ops);
  rc = rcl_subscription_init(&sub_34, &node_1, sub_type_support, topic_14, &subscription_ops);
  rc = rcl_subscription_init(&sub_35, &node_1, sub_type_support, topic_15, &subscription_ops);
  rc = rcl_subscription_init(&sub_36, &node_1, sub_type_support, topic_16, &subscription_ops);
  rc = rcl_subscription_init(&sub_37, &node_1, sub_type_support, topic_17, &subscription_ops);
  rc = rcl_subscription_init(&sub_38, &node_1, sub_type_support, topic_18, &subscription_ops);
  rc = rcl_subscription_init(&sub_39, &node_1, sub_type_support, topic_19, &subscription_ops);
//_____________________________________NODE_DIVIDER_____________________________________
  rc = rcl_node_init(&node_2, "node_2", "", &context, &node_ops);

  rcl_timer_t timer_2 = rcl_get_zero_initialized_timer();

  rc = rcl_timer_init(&timer_2, &clock, &context, RCL_MS_TO_NS(timer_timeout), timer_2_callback, allocator);

  pub_4 = rcl_get_zero_initialized_publisher();
  pub_5 = rcl_get_zero_initialized_publisher();

  rc = rcl_publisher_init(&pub_4, &node_2, pub_type_support, topic_4, &pub_opt);
  rc = rcl_publisher_init(&pub_5, &node_2, pub_type_support, topic_5, &pub_opt);

  rcl_subscription_t sub_40 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_41 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_42 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_43 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_44 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_45 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_46 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_47 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_48 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_49 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_50 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_51 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_52 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_53 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_54 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_55 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_56 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_57 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_58 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_59 = rcl_get_zero_initialized_subscription();

  rc = rcl_subscription_init(&sub_40, &node_2, sub_type_support, topic_0, &subscription_ops);
  rc = rcl_subscription_init(&sub_41, &node_2, sub_type_support, topic_1, &subscription_ops);
  rc = rcl_subscription_init(&sub_42, &node_2, sub_type_support, topic_2, &subscription_ops);
  rc = rcl_subscription_init(&sub_43, &node_2, sub_type_support, topic_3, &subscription_ops);
  rc = rcl_subscription_init(&sub_44, &node_2, sub_type_support, topic_4, &subscription_ops);
  rc = rcl_subscription_init(&sub_45, &node_2, sub_type_support, topic_5, &subscription_ops);
  rc = rcl_subscription_init(&sub_46, &node_2, sub_type_support, topic_6, &subscription_ops);
  rc = rcl_subscription_init(&sub_47, &node_2, sub_type_support, topic_7, &subscription_ops);
  rc = rcl_subscription_init(&sub_48, &node_2, sub_type_support, topic_8, &subscription_ops);
  rc = rcl_subscription_init(&sub_49, &node_2, sub_type_support, topic_9, &subscription_ops);
  rc = rcl_subscription_init(&sub_50, &node_2, sub_type_support, topic_10, &subscription_ops);
  rc = rcl_subscription_init(&sub_51, &node_2, sub_type_support, topic_11, &subscription_ops);
  rc = rcl_subscription_init(&sub_52, &node_2, sub_type_support, topic_12, &subscription_ops);
  rc = rcl_subscription_init(&sub_53, &node_2, sub_type_support, topic_13, &subscription_ops);
  rc = rcl_subscription_init(&sub_54, &node_2, sub_type_support, topic_14, &subscription_ops);
  rc = rcl_subscription_init(&sub_55, &node_2, sub_type_support, topic_15, &subscription_ops);
  rc = rcl_subscription_init(&sub_56, &node_2, sub_type_support, topic_16, &subscription_ops);
  rc = rcl_subscription_init(&sub_57, &node_2, sub_type_support, topic_17, &subscription_ops);
  rc = rcl_subscription_init(&sub_58, &node_2, sub_type_support, topic_18, &subscription_ops);
  rc = rcl_subscription_init(&sub_59, &node_2, sub_type_support, topic_19, &subscription_ops);
//_____________________________________NODE_DIVIDER_____________________________________
  rc = rcl_node_init(&node_3, "node_3", "", &context, &node_ops);

  rcl_timer_t timer_3 = rcl_get_zero_initialized_timer();

  rc = rcl_timer_init(&timer_3, &clock, &context, RCL_MS_TO_NS(timer_timeout), timer_3_callback, allocator);

  pub_6 = rcl_get_zero_initialized_publisher();
  pub_7 = rcl_get_zero_initialized_publisher();

  rc = rcl_publisher_init(&pub_6, &node_3, pub_type_support, topic_6, &pub_opt);
  rc = rcl_publisher_init(&pub_7, &node_3, pub_type_support, topic_7, &pub_opt);

  rcl_subscription_t sub_60 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_61 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_62 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_63 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_64 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_65 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_66 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_67 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_68 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_69 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_70 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_71 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_72 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_73 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_74 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_75 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_76 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_77 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_78 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_79 = rcl_get_zero_initialized_subscription();

  rc = rcl_subscription_init(&sub_60, &node_3, sub_type_support, topic_0, &subscription_ops);
  rc = rcl_subscription_init(&sub_61, &node_3, sub_type_support, topic_1, &subscription_ops);
  rc = rcl_subscription_init(&sub_62, &node_3, sub_type_support, topic_2, &subscription_ops);
  rc = rcl_subscription_init(&sub_63, &node_3, sub_type_support, topic_3, &subscription_ops);
  rc = rcl_subscription_init(&sub_64, &node_3, sub_type_support, topic_4, &subscription_ops);
  rc = rcl_subscription_init(&sub_65, &node_3, sub_type_support, topic_5, &subscription_ops);
  rc = rcl_subscription_init(&sub_66, &node_3, sub_type_support, topic_6, &subscription_ops);
  rc = rcl_subscription_init(&sub_67, &node_3, sub_type_support, topic_7, &subscription_ops);
  rc = rcl_subscription_init(&sub_68, &node_3, sub_type_support, topic_8, &subscription_ops);
  rc = rcl_subscription_init(&sub_69, &node_3, sub_type_support, topic_9, &subscription_ops);
  rc = rcl_subscription_init(&sub_70, &node_3, sub_type_support, topic_10, &subscription_ops);
  rc = rcl_subscription_init(&sub_71, &node_3, sub_type_support, topic_11, &subscription_ops);
  rc = rcl_subscription_init(&sub_72, &node_3, sub_type_support, topic_12, &subscription_ops);
  rc = rcl_subscription_init(&sub_73, &node_3, sub_type_support, topic_13, &subscription_ops);
  rc = rcl_subscription_init(&sub_74, &node_3, sub_type_support, topic_14, &subscription_ops);
  rc = rcl_subscription_init(&sub_75, &node_3, sub_type_support, topic_15, &subscription_ops);
  rc = rcl_subscription_init(&sub_76, &node_3, sub_type_support, topic_16, &subscription_ops);
  rc = rcl_subscription_init(&sub_77, &node_3, sub_type_support, topic_17, &subscription_ops);
  rc = rcl_subscription_init(&sub_78, &node_3, sub_type_support, topic_18, &subscription_ops);
  rc = rcl_subscription_init(&sub_79, &node_3, sub_type_support, topic_19, &subscription_ops);
//_____________________________________NODE_DIVIDER_____________________________________
  rc = rcl_node_init(&node_4, "node_4", "", &context, &node_ops);

  rcl_timer_t timer_4 = rcl_get_zero_initialized_timer();

  rc = rcl_timer_init(&timer_4, &clock, &context, RCL_MS_TO_NS(timer_timeout), timer_4_callback, allocator);

  pub_8 = rcl_get_zero_initialized_publisher();
  pub_9 = rcl_get_zero_initialized_publisher();

  rc = rcl_publisher_init(&pub_8, &node_4, pub_type_support, topic_8, &pub_opt);
  rc = rcl_publisher_init(&pub_9, &node_4, pub_type_support, topic_9, &pub_opt);

  rcl_subscription_t sub_80 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_81 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_82 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_83 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_84 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_85 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_86 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_87 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_88 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_89 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_90 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_91 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_92 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_93 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_94 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_95 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_96 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_97 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_98 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_99 = rcl_get_zero_initialized_subscription();

  rc = rcl_subscription_init(&sub_80, &node_4, sub_type_support, topic_0, &subscription_ops);
  rc = rcl_subscription_init(&sub_81, &node_4, sub_type_support, topic_1, &subscription_ops);
  rc = rcl_subscription_init(&sub_82, &node_4, sub_type_support, topic_2, &subscription_ops);
  rc = rcl_subscription_init(&sub_83, &node_4, sub_type_support, topic_3, &subscription_ops);
  rc = rcl_subscription_init(&sub_84, &node_4, sub_type_support, topic_4, &subscription_ops);
  rc = rcl_subscription_init(&sub_85, &node_4, sub_type_support, topic_5, &subscription_ops);
  rc = rcl_subscription_init(&sub_86, &node_4, sub_type_support, topic_6, &subscription_ops);
  rc = rcl_subscription_init(&sub_87, &node_4, sub_type_support, topic_7, &subscription_ops);
  rc = rcl_subscription_init(&sub_88, &node_4, sub_type_support, topic_8, &subscription_ops);
  rc = rcl_subscription_init(&sub_89, &node_4, sub_type_support, topic_9, &subscription_ops);
  rc = rcl_subscription_init(&sub_90, &node_4, sub_type_support, topic_10, &subscription_ops);
  rc = rcl_subscription_init(&sub_91, &node_4, sub_type_support, topic_11, &subscription_ops);
  rc = rcl_subscription_init(&sub_92, &node_4, sub_type_support, topic_12, &subscription_ops);
  rc = rcl_subscription_init(&sub_93, &node_4, sub_type_support, topic_13, &subscription_ops);
  rc = rcl_subscription_init(&sub_94, &node_4, sub_type_support, topic_14, &subscription_ops);
  rc = rcl_subscription_init(&sub_95, &node_4, sub_type_support, topic_15, &subscription_ops);
  rc = rcl_subscription_init(&sub_96, &node_4, sub_type_support, topic_16, &subscription_ops);
  rc = rcl_subscription_init(&sub_97, &node_4, sub_type_support, topic_17, &subscription_ops);
  rc = rcl_subscription_init(&sub_98, &node_4, sub_type_support, topic_18, &subscription_ops);
  rc = rcl_subscription_init(&sub_99, &node_4, sub_type_support, topic_19, &subscription_ops);
//_____________________________________NODE_DIVIDER_____________________________________
  rc = rcl_node_init(&node_5, "node_5", "", &context, &node_ops);

  rcl_timer_t timer_5 = rcl_get_zero_initialized_timer();

  rc = rcl_timer_init(&timer_5, &clock, &context, RCL_MS_TO_NS(timer_timeout), timer_5_callback, allocator);

  pub_10 = rcl_get_zero_initialized_publisher();
  pub_11 = rcl_get_zero_initialized_publisher();

  rc = rcl_publisher_init(&pub_10, &node_5, pub_type_support, topic_10, &pub_opt);
  rc = rcl_publisher_init(&pub_11, &node_5, pub_type_support, topic_11, &pub_opt);

  rcl_subscription_t sub_100 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_101 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_102 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_103 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_104 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_105 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_106 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_107 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_108 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_109 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_110 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_111 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_112 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_113 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_114 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_115 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_116 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_117 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_118 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_119 = rcl_get_zero_initialized_subscription();

  rc = rcl_subscription_init(&sub_100, &node_5, sub_type_support, topic_0, &subscription_ops);
  rc = rcl_subscription_init(&sub_101, &node_5, sub_type_support, topic_1, &subscription_ops);
  rc = rcl_subscription_init(&sub_102, &node_5, sub_type_support, topic_2, &subscription_ops);
  rc = rcl_subscription_init(&sub_103, &node_5, sub_type_support, topic_3, &subscription_ops);
  rc = rcl_subscription_init(&sub_104, &node_5, sub_type_support, topic_4, &subscription_ops);
  rc = rcl_subscription_init(&sub_105, &node_5, sub_type_support, topic_5, &subscription_ops);
  rc = rcl_subscription_init(&sub_106, &node_5, sub_type_support, topic_6, &subscription_ops);
  rc = rcl_subscription_init(&sub_107, &node_5, sub_type_support, topic_7, &subscription_ops);
  rc = rcl_subscription_init(&sub_108, &node_5, sub_type_support, topic_8, &subscription_ops);
  rc = rcl_subscription_init(&sub_109, &node_5, sub_type_support, topic_9, &subscription_ops);
  rc = rcl_subscription_init(&sub_110, &node_5, sub_type_support, topic_10, &subscription_ops);
  rc = rcl_subscription_init(&sub_111, &node_5, sub_type_support, topic_11, &subscription_ops);
  rc = rcl_subscription_init(&sub_112, &node_5, sub_type_support, topic_12, &subscription_ops);
  rc = rcl_subscription_init(&sub_113, &node_5, sub_type_support, topic_13, &subscription_ops);
  rc = rcl_subscription_init(&sub_114, &node_5, sub_type_support, topic_14, &subscription_ops);
  rc = rcl_subscription_init(&sub_115, &node_5, sub_type_support, topic_15, &subscription_ops);
  rc = rcl_subscription_init(&sub_116, &node_5, sub_type_support, topic_16, &subscription_ops);
  rc = rcl_subscription_init(&sub_117, &node_5, sub_type_support, topic_17, &subscription_ops);
  rc = rcl_subscription_init(&sub_118, &node_5, sub_type_support, topic_18, &subscription_ops);
  rc = rcl_subscription_init(&sub_119, &node_5, sub_type_support, topic_19, &subscription_ops);
//_____________________________________NODE_DIVIDER_____________________________________
  rc = rcl_node_init(&node_6, "node_6", "", &context, &node_ops);

  rcl_timer_t timer_6 = rcl_get_zero_initialized_timer();

  rc = rcl_timer_init(&timer_6, &clock, &context, RCL_MS_TO_NS(timer_timeout), timer_6_callback, allocator);

  pub_12 = rcl_get_zero_initialized_publisher();
  pub_13 = rcl_get_zero_initialized_publisher();

  rc = rcl_publisher_init(&pub_12, &node_6, pub_type_support, topic_12, &pub_opt);
  rc = rcl_publisher_init(&pub_13, &node_6, pub_type_support, topic_13, &pub_opt);

  rcl_subscription_t sub_120 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_121 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_122 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_123 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_124 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_125 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_126 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_127 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_128 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_129 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_130 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_131 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_132 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_133 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_134 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_135 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_136 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_137 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_138 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_139 = rcl_get_zero_initialized_subscription();

  rc = rcl_subscription_init(&sub_120, &node_6, sub_type_support, topic_0, &subscription_ops);
  rc = rcl_subscription_init(&sub_121, &node_6, sub_type_support, topic_1, &subscription_ops);
  rc = rcl_subscription_init(&sub_122, &node_6, sub_type_support, topic_2, &subscription_ops);
  rc = rcl_subscription_init(&sub_123, &node_6, sub_type_support, topic_3, &subscription_ops);
  rc = rcl_subscription_init(&sub_124, &node_6, sub_type_support, topic_4, &subscription_ops);
  rc = rcl_subscription_init(&sub_125, &node_6, sub_type_support, topic_5, &subscription_ops);
  rc = rcl_subscription_init(&sub_126, &node_6, sub_type_support, topic_6, &subscription_ops);
  rc = rcl_subscription_init(&sub_127, &node_6, sub_type_support, topic_7, &subscription_ops);
  rc = rcl_subscription_init(&sub_128, &node_6, sub_type_support, topic_8, &subscription_ops);
  rc = rcl_subscription_init(&sub_129, &node_6, sub_type_support, topic_9, &subscription_ops);
  rc = rcl_subscription_init(&sub_130, &node_6, sub_type_support, topic_10, &subscription_ops);
  rc = rcl_subscription_init(&sub_131, &node_6, sub_type_support, topic_11, &subscription_ops);
  rc = rcl_subscription_init(&sub_132, &node_6, sub_type_support, topic_12, &subscription_ops);
  rc = rcl_subscription_init(&sub_133, &node_6, sub_type_support, topic_13, &subscription_ops);
  rc = rcl_subscription_init(&sub_134, &node_6, sub_type_support, topic_14, &subscription_ops);
  rc = rcl_subscription_init(&sub_135, &node_6, sub_type_support, topic_15, &subscription_ops);
  rc = rcl_subscription_init(&sub_136, &node_6, sub_type_support, topic_16, &subscription_ops);
  rc = rcl_subscription_init(&sub_137, &node_6, sub_type_support, topic_17, &subscription_ops);
  rc = rcl_subscription_init(&sub_138, &node_6, sub_type_support, topic_18, &subscription_ops);
  rc = rcl_subscription_init(&sub_139, &node_6, sub_type_support, topic_19, &subscription_ops);
//_____________________________________NODE_DIVIDER_____________________________________
  rc = rcl_node_init(&node_7, "node_7", "", &context, &node_ops);

  rcl_timer_t timer_7 = rcl_get_zero_initialized_timer();

  rc = rcl_timer_init(&timer_7, &clock, &context, RCL_MS_TO_NS(timer_timeout), timer_7_callback, allocator);

  pub_14 = rcl_get_zero_initialized_publisher();
  pub_15 = rcl_get_zero_initialized_publisher();

  rc = rcl_publisher_init(&pub_14, &node_7, pub_type_support, topic_14, &pub_opt);
  rc = rcl_publisher_init(&pub_15, &node_7, pub_type_support, topic_15, &pub_opt);

  rcl_subscription_t sub_140 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_141 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_142 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_143 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_144 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_145 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_146 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_147 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_148 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_149 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_150 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_151 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_152 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_153 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_154 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_155 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_156 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_157 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_158 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_159 = rcl_get_zero_initialized_subscription();

  rc = rcl_subscription_init(&sub_140, &node_7, sub_type_support, topic_0, &subscription_ops);
  rc = rcl_subscription_init(&sub_141, &node_7, sub_type_support, topic_1, &subscription_ops);
  rc = rcl_subscription_init(&sub_142, &node_7, sub_type_support, topic_2, &subscription_ops);
  rc = rcl_subscription_init(&sub_143, &node_7, sub_type_support, topic_3, &subscription_ops);
  rc = rcl_subscription_init(&sub_144, &node_7, sub_type_support, topic_4, &subscription_ops);
  rc = rcl_subscription_init(&sub_145, &node_7, sub_type_support, topic_5, &subscription_ops);
  rc = rcl_subscription_init(&sub_146, &node_7, sub_type_support, topic_6, &subscription_ops);
  rc = rcl_subscription_init(&sub_147, &node_7, sub_type_support, topic_7, &subscription_ops);
  rc = rcl_subscription_init(&sub_148, &node_7, sub_type_support, topic_8, &subscription_ops);
  rc = rcl_subscription_init(&sub_149, &node_7, sub_type_support, topic_9, &subscription_ops);
  rc = rcl_subscription_init(&sub_150, &node_7, sub_type_support, topic_10, &subscription_ops);
  rc = rcl_subscription_init(&sub_151, &node_7, sub_type_support, topic_11, &subscription_ops);
  rc = rcl_subscription_init(&sub_152, &node_7, sub_type_support, topic_12, &subscription_ops);
  rc = rcl_subscription_init(&sub_153, &node_7, sub_type_support, topic_13, &subscription_ops);
  rc = rcl_subscription_init(&sub_154, &node_7, sub_type_support, topic_14, &subscription_ops);
  rc = rcl_subscription_init(&sub_155, &node_7, sub_type_support, topic_15, &subscription_ops);
  rc = rcl_subscription_init(&sub_156, &node_7, sub_type_support, topic_16, &subscription_ops);
  rc = rcl_subscription_init(&sub_157, &node_7, sub_type_support, topic_17, &subscription_ops);
  rc = rcl_subscription_init(&sub_158, &node_7, sub_type_support, topic_18, &subscription_ops);
  rc = rcl_subscription_init(&sub_159, &node_7, sub_type_support, topic_19, &subscription_ops);
//_____________________________________NODE_DIVIDER_____________________________________
  rc = rcl_node_init(&node_8, "node_8", "", &context, &node_ops);

  rcl_timer_t timer_8 = rcl_get_zero_initialized_timer();

  rc = rcl_timer_init(&timer_8, &clock, &context, RCL_MS_TO_NS(timer_timeout), timer_8_callback, allocator);

  pub_16 = rcl_get_zero_initialized_publisher();
  pub_17 = rcl_get_zero_initialized_publisher();

  rc = rcl_publisher_init(&pub_16, &node_8, pub_type_support, topic_16, &pub_opt);
  rc = rcl_publisher_init(&pub_17, &node_8, pub_type_support, topic_17, &pub_opt);

  rcl_subscription_t sub_160 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_161 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_162 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_163 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_164 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_165 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_166 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_167 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_168 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_169 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_170 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_171 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_172 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_173 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_174 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_175 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_176 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_177 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_178 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_179 = rcl_get_zero_initialized_subscription();

  rc = rcl_subscription_init(&sub_160, &node_8, sub_type_support, topic_0, &subscription_ops);
  rc = rcl_subscription_init(&sub_161, &node_8, sub_type_support, topic_1, &subscription_ops);
  rc = rcl_subscription_init(&sub_162, &node_8, sub_type_support, topic_2, &subscription_ops);
  rc = rcl_subscription_init(&sub_163, &node_8, sub_type_support, topic_3, &subscription_ops);
  rc = rcl_subscription_init(&sub_164, &node_8, sub_type_support, topic_4, &subscription_ops);
  rc = rcl_subscription_init(&sub_165, &node_8, sub_type_support, topic_5, &subscription_ops);
  rc = rcl_subscription_init(&sub_166, &node_8, sub_type_support, topic_6, &subscription_ops);
  rc = rcl_subscription_init(&sub_167, &node_8, sub_type_support, topic_7, &subscription_ops);
  rc = rcl_subscription_init(&sub_168, &node_8, sub_type_support, topic_8, &subscription_ops);
  rc = rcl_subscription_init(&sub_169, &node_8, sub_type_support, topic_9, &subscription_ops);
  rc = rcl_subscription_init(&sub_170, &node_8, sub_type_support, topic_10, &subscription_ops);
  rc = rcl_subscription_init(&sub_171, &node_8, sub_type_support, topic_11, &subscription_ops);
  rc = rcl_subscription_init(&sub_172, &node_8, sub_type_support, topic_12, &subscription_ops);
  rc = rcl_subscription_init(&sub_173, &node_8, sub_type_support, topic_13, &subscription_ops);
  rc = rcl_subscription_init(&sub_174, &node_8, sub_type_support, topic_14, &subscription_ops);
  rc = rcl_subscription_init(&sub_175, &node_8, sub_type_support, topic_15, &subscription_ops);
  rc = rcl_subscription_init(&sub_176, &node_8, sub_type_support, topic_16, &subscription_ops);
  rc = rcl_subscription_init(&sub_177, &node_8, sub_type_support, topic_17, &subscription_ops);
  rc = rcl_subscription_init(&sub_178, &node_8, sub_type_support, topic_18, &subscription_ops);
  rc = rcl_subscription_init(&sub_179, &node_8, sub_type_support, topic_19, &subscription_ops);
//_____________________________________NODE_DIVIDER_____________________________________
  rc = rcl_node_init(&node_9, "node_9", "", &context, &node_ops);

  rcl_timer_t timer_9 = rcl_get_zero_initialized_timer();

  rc = rcl_timer_init(&timer_9, &clock, &context, RCL_MS_TO_NS(timer_timeout), timer_9_callback, allocator);

  pub_18 = rcl_get_zero_initialized_publisher();
  pub_19 = rcl_get_zero_initialized_publisher();

  rc = rcl_publisher_init(&pub_18, &node_9, pub_type_support, topic_18, &pub_opt);
  rc = rcl_publisher_init(&pub_19, &node_9, pub_type_support, topic_19, &pub_opt);

  rcl_subscription_t sub_180 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_181 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_182 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_183 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_184 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_185 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_186 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_187 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_188 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_189 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_190 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_191 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_192 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_193 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_194 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_195 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_196 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_197 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_198 = rcl_get_zero_initialized_subscription();
  rcl_subscription_t sub_199 = rcl_get_zero_initialized_subscription();

  rc = rcl_subscription_init(&sub_180, &node_9, sub_type_support, topic_0, &subscription_ops);
  rc = rcl_subscription_init(&sub_181, &node_9, sub_type_support, topic_1, &subscription_ops);
  rc = rcl_subscription_init(&sub_182, &node_9, sub_type_support, topic_2, &subscription_ops);
  rc = rcl_subscription_init(&sub_183, &node_9, sub_type_support, topic_3, &subscription_ops);
  rc = rcl_subscription_init(&sub_184, &node_9, sub_type_support, topic_4, &subscription_ops);
  rc = rcl_subscription_init(&sub_185, &node_9, sub_type_support, topic_5, &subscription_ops);
  rc = rcl_subscription_init(&sub_186, &node_9, sub_type_support, topic_6, &subscription_ops);
  rc = rcl_subscription_init(&sub_187, &node_9, sub_type_support, topic_7, &subscription_ops);
  rc = rcl_subscription_init(&sub_188, &node_9, sub_type_support, topic_8, &subscription_ops);
  rc = rcl_subscription_init(&sub_189, &node_9, sub_type_support, topic_9, &subscription_ops);
  rc = rcl_subscription_init(&sub_190, &node_9, sub_type_support, topic_10, &subscription_ops);
  rc = rcl_subscription_init(&sub_191, &node_9, sub_type_support, topic_11, &subscription_ops);
  rc = rcl_subscription_init(&sub_192, &node_9, sub_type_support, topic_12, &subscription_ops);
  rc = rcl_subscription_init(&sub_193, &node_9, sub_type_support, topic_13, &subscription_ops);
  rc = rcl_subscription_init(&sub_194, &node_9, sub_type_support, topic_14, &subscription_ops);
  rc = rcl_subscription_init(&sub_195, &node_9, sub_type_support, topic_15, &subscription_ops);
  rc = rcl_subscription_init(&sub_196, &node_9, sub_type_support, topic_16, &subscription_ops);
  rc = rcl_subscription_init(&sub_197, &node_9, sub_type_support, topic_17, &subscription_ops);
  rc = rcl_subscription_init(&sub_198, &node_9, sub_type_support, topic_18, &subscription_ops);
  rc = rcl_subscription_init(&sub_199, &node_9, sub_type_support, topic_19, &subscription_ops);
//___________________________________END_OF_NODES_LIST__________________________________

  rcle_let_executor_add_timer(&exe, &timer_0);
  rcle_let_executor_add_timer(&exe, &timer_1);
  rcle_let_executor_add_timer(&exe, &timer_2);
  rcle_let_executor_add_timer(&exe, &timer_3);
  rcle_let_executor_add_timer(&exe, &timer_4);
  rcle_let_executor_add_timer(&exe, &timer_5);
  rcle_let_executor_add_timer(&exe, &timer_6);
  rcle_let_executor_add_timer(&exe, &timer_7);
  rcle_let_executor_add_timer(&exe, &timer_8);
  rcle_let_executor_add_timer(&exe, &timer_9);

  rc = rcle_let_executor_add_subscription(&exe, &sub_0, &sub_msg_0, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_1, &sub_msg_1, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_2, &sub_msg_2, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_3, &sub_msg_3, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_4, &sub_msg_4, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_5, &sub_msg_5, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_6, &sub_msg_6, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_7, &sub_msg_7, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_8, &sub_msg_8, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_9, &sub_msg_9, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_10, &sub_msg_10, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_11, &sub_msg_11, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_12, &sub_msg_12, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_13, &sub_msg_13, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_14, &sub_msg_14, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_15, &sub_msg_15, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_16, &sub_msg_16, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_17, &sub_msg_17, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_18, &sub_msg_18, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_19, &sub_msg_19, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_20, &sub_msg_20, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_21, &sub_msg_21, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_22, &sub_msg_22, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_23, &sub_msg_23, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_24, &sub_msg_24, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_25, &sub_msg_25, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_26, &sub_msg_26, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_27, &sub_msg_27, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_28, &sub_msg_28, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_29, &sub_msg_29, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_30, &sub_msg_30, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_31, &sub_msg_31, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_32, &sub_msg_32, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_33, &sub_msg_33, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_34, &sub_msg_34, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_35, &sub_msg_35, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_36, &sub_msg_36, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_37, &sub_msg_37, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_38, &sub_msg_38, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_39, &sub_msg_39, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_40, &sub_msg_40, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_41, &sub_msg_41, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_42, &sub_msg_42, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_43, &sub_msg_43, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_44, &sub_msg_44, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_45, &sub_msg_45, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_46, &sub_msg_46, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_47, &sub_msg_47, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_48, &sub_msg_48, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_49, &sub_msg_49, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_50, &sub_msg_50, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_51, &sub_msg_51, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_52, &sub_msg_52, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_53, &sub_msg_53, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_54, &sub_msg_54, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_55, &sub_msg_55, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_56, &sub_msg_56, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_57, &sub_msg_57, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_58, &sub_msg_58, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_59, &sub_msg_59, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_60, &sub_msg_60, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_61, &sub_msg_61, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_62, &sub_msg_62, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_63, &sub_msg_63, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_64, &sub_msg_64, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_65, &sub_msg_65, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_66, &sub_msg_66, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_67, &sub_msg_67, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_68, &sub_msg_68, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_69, &sub_msg_69, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_70, &sub_msg_70, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_71, &sub_msg_71, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_72, &sub_msg_72, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_73, &sub_msg_73, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_74, &sub_msg_74, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_75, &sub_msg_75, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_76, &sub_msg_76, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_77, &sub_msg_77, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_78, &sub_msg_78, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_79, &sub_msg_79, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_80, &sub_msg_80, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_81, &sub_msg_81, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_82, &sub_msg_82, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_83, &sub_msg_83, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_84, &sub_msg_84, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_85, &sub_msg_85, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_86, &sub_msg_86, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_87, &sub_msg_87, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_88, &sub_msg_88, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_89, &sub_msg_89, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_90, &sub_msg_90, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_91, &sub_msg_91, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_92, &sub_msg_92, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_93, &sub_msg_93, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_94, &sub_msg_94, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_95, &sub_msg_95, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_96, &sub_msg_96, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_97, &sub_msg_97, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_98, &sub_msg_98, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_99, &sub_msg_99, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_100, &sub_msg_100, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_101, &sub_msg_101, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_102, &sub_msg_102, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_103, &sub_msg_103, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_104, &sub_msg_104, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_105, &sub_msg_105, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_106, &sub_msg_106, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_107, &sub_msg_107, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_108, &sub_msg_108, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_109, &sub_msg_109, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_110, &sub_msg_110, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_111, &sub_msg_111, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_112, &sub_msg_112, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_113, &sub_msg_113, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_114, &sub_msg_114, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_115, &sub_msg_115, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_116, &sub_msg_116, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_117, &sub_msg_117, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_118, &sub_msg_118, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_119, &sub_msg_119, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_120, &sub_msg_120, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_121, &sub_msg_121, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_122, &sub_msg_122, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_123, &sub_msg_123, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_124, &sub_msg_124, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_125, &sub_msg_125, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_126, &sub_msg_126, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_127, &sub_msg_127, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_128, &sub_msg_128, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_129, &sub_msg_129, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_130, &sub_msg_130, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_131, &sub_msg_131, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_132, &sub_msg_132, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_133, &sub_msg_133, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_134, &sub_msg_134, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_135, &sub_msg_135, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_136, &sub_msg_136, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_137, &sub_msg_137, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_138, &sub_msg_138, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_139, &sub_msg_139, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_140, &sub_msg_140, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_141, &sub_msg_141, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_142, &sub_msg_142, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_143, &sub_msg_143, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_144, &sub_msg_144, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_145, &sub_msg_145, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_146, &sub_msg_146, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_147, &sub_msg_147, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_148, &sub_msg_148, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_149, &sub_msg_149, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_150, &sub_msg_150, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_151, &sub_msg_151, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_152, &sub_msg_152, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_153, &sub_msg_153, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_154, &sub_msg_154, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_155, &sub_msg_155, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_156, &sub_msg_156, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_157, &sub_msg_157, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_158, &sub_msg_158, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_159, &sub_msg_159, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_160, &sub_msg_160, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_161, &sub_msg_161, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_162, &sub_msg_162, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_163, &sub_msg_163, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_164, &sub_msg_164, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_165, &sub_msg_165, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_166, &sub_msg_166, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_167, &sub_msg_167, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_168, &sub_msg_168, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_169, &sub_msg_169, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_170, &sub_msg_170, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_171, &sub_msg_171, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_172, &sub_msg_172, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_173, &sub_msg_173, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_174, &sub_msg_174, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_175, &sub_msg_175, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_176, &sub_msg_176, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_177, &sub_msg_177, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_178, &sub_msg_178, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_179, &sub_msg_179, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_180, &sub_msg_180, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_181, &sub_msg_181, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_182, &sub_msg_182, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_183, &sub_msg_183, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_184, &sub_msg_184, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_185, &sub_msg_185, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_186, &sub_msg_186, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_187, &sub_msg_187, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_188, &sub_msg_188, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_189, &sub_msg_189, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_190, &sub_msg_190, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_191, &sub_msg_191, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_192, &sub_msg_192, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_193, &sub_msg_193, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_194, &sub_msg_194, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_195, &sub_msg_195, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_196, &sub_msg_196, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_197, &sub_msg_197, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_198, &sub_msg_198, &sub_callback, ON_NEW_DATA);
  rc = rcle_let_executor_add_subscription(&exe, &sub_199, &sub_msg_199, &sub_callback, ON_NEW_DATA);

  rc = rcle_let_executor_set_timeout(&exe, 100000000);

  rcle_let_executor_spin(&exe);

  rcle_let_executor_fini(&exe);

  rc = rcl_subscription_fini(&sub_0, &node_0);
  rc = rcl_subscription_fini(&sub_1, &node_0);
  rc = rcl_subscription_fini(&sub_2, &node_0);
  rc = rcl_subscription_fini(&sub_3, &node_0);
  rc = rcl_subscription_fini(&sub_4, &node_0);
  rc = rcl_subscription_fini(&sub_5, &node_0);
  rc = rcl_subscription_fini(&sub_6, &node_0);
  rc = rcl_subscription_fini(&sub_7, &node_0);
  rc = rcl_subscription_fini(&sub_8, &node_0);
  rc = rcl_subscription_fini(&sub_9, &node_0);
  rc = rcl_subscription_fini(&sub_10, &node_0);
  rc = rcl_subscription_fini(&sub_11, &node_0);
  rc = rcl_subscription_fini(&sub_12, &node_0);
  rc = rcl_subscription_fini(&sub_13, &node_0);
  rc = rcl_subscription_fini(&sub_14, &node_0);
  rc = rcl_subscription_fini(&sub_15, &node_0);
  rc = rcl_subscription_fini(&sub_16, &node_0);
  rc = rcl_subscription_fini(&sub_17, &node_0);
  rc = rcl_subscription_fini(&sub_18, &node_0);
  rc = rcl_subscription_fini(&sub_19, &node_0);
  rc = rcl_subscription_fini(&sub_20, &node_1);
  rc = rcl_subscription_fini(&sub_21, &node_1);
  rc = rcl_subscription_fini(&sub_22, &node_1);
  rc = rcl_subscription_fini(&sub_23, &node_1);
  rc = rcl_subscription_fini(&sub_24, &node_1);
  rc = rcl_subscription_fini(&sub_25, &node_1);
  rc = rcl_subscription_fini(&sub_26, &node_1);
  rc = rcl_subscription_fini(&sub_27, &node_1);
  rc = rcl_subscription_fini(&sub_28, &node_1);
  rc = rcl_subscription_fini(&sub_29, &node_1);
  rc = rcl_subscription_fini(&sub_30, &node_1);
  rc = rcl_subscription_fini(&sub_31, &node_1);
  rc = rcl_subscription_fini(&sub_32, &node_1);
  rc = rcl_subscription_fini(&sub_33, &node_1);
  rc = rcl_subscription_fini(&sub_34, &node_1);
  rc = rcl_subscription_fini(&sub_35, &node_1);
  rc = rcl_subscription_fini(&sub_36, &node_1);
  rc = rcl_subscription_fini(&sub_37, &node_1);
  rc = rcl_subscription_fini(&sub_38, &node_1);
  rc = rcl_subscription_fini(&sub_39, &node_1);
  rc = rcl_subscription_fini(&sub_40, &node_2);
  rc = rcl_subscription_fini(&sub_41, &node_2);
  rc = rcl_subscription_fini(&sub_42, &node_2);
  rc = rcl_subscription_fini(&sub_43, &node_2);
  rc = rcl_subscription_fini(&sub_44, &node_2);
  rc = rcl_subscription_fini(&sub_45, &node_2);
  rc = rcl_subscription_fini(&sub_46, &node_2);
  rc = rcl_subscription_fini(&sub_47, &node_2);
  rc = rcl_subscription_fini(&sub_48, &node_2);
  rc = rcl_subscription_fini(&sub_49, &node_2);
  rc = rcl_subscription_fini(&sub_50, &node_2);
  rc = rcl_subscription_fini(&sub_51, &node_2);
  rc = rcl_subscription_fini(&sub_52, &node_2);
  rc = rcl_subscription_fini(&sub_53, &node_2);
  rc = rcl_subscription_fini(&sub_54, &node_2);
  rc = rcl_subscription_fini(&sub_55, &node_2);
  rc = rcl_subscription_fini(&sub_56, &node_2);
  rc = rcl_subscription_fini(&sub_57, &node_2);
  rc = rcl_subscription_fini(&sub_58, &node_2);
  rc = rcl_subscription_fini(&sub_59, &node_2);
  rc = rcl_subscription_fini(&sub_60, &node_3);
  rc = rcl_subscription_fini(&sub_61, &node_3);
  rc = rcl_subscription_fini(&sub_62, &node_3);
  rc = rcl_subscription_fini(&sub_63, &node_3);
  rc = rcl_subscription_fini(&sub_64, &node_3);
  rc = rcl_subscription_fini(&sub_65, &node_3);
  rc = rcl_subscription_fini(&sub_66, &node_3);
  rc = rcl_subscription_fini(&sub_67, &node_3);
  rc = rcl_subscription_fini(&sub_68, &node_3);
  rc = rcl_subscription_fini(&sub_69, &node_3);
  rc = rcl_subscription_fini(&sub_70, &node_3);
  rc = rcl_subscription_fini(&sub_71, &node_3);
  rc = rcl_subscription_fini(&sub_72, &node_3);
  rc = rcl_subscription_fini(&sub_73, &node_3);
  rc = rcl_subscription_fini(&sub_74, &node_3);
  rc = rcl_subscription_fini(&sub_75, &node_3);
  rc = rcl_subscription_fini(&sub_76, &node_3);
  rc = rcl_subscription_fini(&sub_77, &node_3);
  rc = rcl_subscription_fini(&sub_78, &node_3);
  rc = rcl_subscription_fini(&sub_79, &node_3);
  rc = rcl_subscription_fini(&sub_80, &node_4);
  rc = rcl_subscription_fini(&sub_81, &node_4);
  rc = rcl_subscription_fini(&sub_82, &node_4);
  rc = rcl_subscription_fini(&sub_83, &node_4);
  rc = rcl_subscription_fini(&sub_84, &node_4);
  rc = rcl_subscription_fini(&sub_85, &node_4);
  rc = rcl_subscription_fini(&sub_86, &node_4);
  rc = rcl_subscription_fini(&sub_87, &node_4);
  rc = rcl_subscription_fini(&sub_88, &node_4);
  rc = rcl_subscription_fini(&sub_89, &node_4);
  rc = rcl_subscription_fini(&sub_90, &node_4);
  rc = rcl_subscription_fini(&sub_91, &node_4);
  rc = rcl_subscription_fini(&sub_92, &node_4);
  rc = rcl_subscription_fini(&sub_93, &node_4);
  rc = rcl_subscription_fini(&sub_94, &node_4);
  rc = rcl_subscription_fini(&sub_95, &node_4);
  rc = rcl_subscription_fini(&sub_96, &node_4);
  rc = rcl_subscription_fini(&sub_97, &node_4);
  rc = rcl_subscription_fini(&sub_98, &node_4);
  rc = rcl_subscription_fini(&sub_99, &node_4);
  rc = rcl_subscription_fini(&sub_100, &node_5);
  rc = rcl_subscription_fini(&sub_101, &node_5);
  rc = rcl_subscription_fini(&sub_102, &node_5);
  rc = rcl_subscription_fini(&sub_103, &node_5);
  rc = rcl_subscription_fini(&sub_104, &node_5);
  rc = rcl_subscription_fini(&sub_105, &node_5);
  rc = rcl_subscription_fini(&sub_106, &node_5);
  rc = rcl_subscription_fini(&sub_107, &node_5);
  rc = rcl_subscription_fini(&sub_108, &node_5);
  rc = rcl_subscription_fini(&sub_109, &node_5);
  rc = rcl_subscription_fini(&sub_110, &node_5);
  rc = rcl_subscription_fini(&sub_111, &node_5);
  rc = rcl_subscription_fini(&sub_112, &node_5);
  rc = rcl_subscription_fini(&sub_113, &node_5);
  rc = rcl_subscription_fini(&sub_114, &node_5);
  rc = rcl_subscription_fini(&sub_115, &node_5);
  rc = rcl_subscription_fini(&sub_116, &node_5);
  rc = rcl_subscription_fini(&sub_117, &node_5);
  rc = rcl_subscription_fini(&sub_118, &node_5);
  rc = rcl_subscription_fini(&sub_119, &node_5);
  rc = rcl_subscription_fini(&sub_120, &node_6);
  rc = rcl_subscription_fini(&sub_121, &node_6);
  rc = rcl_subscription_fini(&sub_122, &node_6);
  rc = rcl_subscription_fini(&sub_123, &node_6);
  rc = rcl_subscription_fini(&sub_124, &node_6);
  rc = rcl_subscription_fini(&sub_125, &node_6);
  rc = rcl_subscription_fini(&sub_126, &node_6);
  rc = rcl_subscription_fini(&sub_127, &node_6);
  rc = rcl_subscription_fini(&sub_128, &node_6);
  rc = rcl_subscription_fini(&sub_129, &node_6);
  rc = rcl_subscription_fini(&sub_130, &node_6);
  rc = rcl_subscription_fini(&sub_131, &node_6);
  rc = rcl_subscription_fini(&sub_132, &node_6);
  rc = rcl_subscription_fini(&sub_133, &node_6);
  rc = rcl_subscription_fini(&sub_134, &node_6);
  rc = rcl_subscription_fini(&sub_135, &node_6);
  rc = rcl_subscription_fini(&sub_136, &node_6);
  rc = rcl_subscription_fini(&sub_137, &node_6);
  rc = rcl_subscription_fini(&sub_138, &node_6);
  rc = rcl_subscription_fini(&sub_139, &node_6);
  rc = rcl_subscription_fini(&sub_140, &node_7);
  rc = rcl_subscription_fini(&sub_141, &node_7);
  rc = rcl_subscription_fini(&sub_142, &node_7);
  rc = rcl_subscription_fini(&sub_143, &node_7);
  rc = rcl_subscription_fini(&sub_144, &node_7);
  rc = rcl_subscription_fini(&sub_145, &node_7);
  rc = rcl_subscription_fini(&sub_146, &node_7);
  rc = rcl_subscription_fini(&sub_147, &node_7);
  rc = rcl_subscription_fini(&sub_148, &node_7);
  rc = rcl_subscription_fini(&sub_149, &node_7);
  rc = rcl_subscription_fini(&sub_150, &node_7);
  rc = rcl_subscription_fini(&sub_151, &node_7);
  rc = rcl_subscription_fini(&sub_152, &node_7);
  rc = rcl_subscription_fini(&sub_153, &node_7);
  rc = rcl_subscription_fini(&sub_154, &node_7);
  rc = rcl_subscription_fini(&sub_155, &node_7);
  rc = rcl_subscription_fini(&sub_156, &node_7);
  rc = rcl_subscription_fini(&sub_157, &node_7);
  rc = rcl_subscription_fini(&sub_158, &node_7);
  rc = rcl_subscription_fini(&sub_159, &node_7);
  rc = rcl_subscription_fini(&sub_160, &node_8);
  rc = rcl_subscription_fini(&sub_161, &node_8);
  rc = rcl_subscription_fini(&sub_162, &node_8);
  rc = rcl_subscription_fini(&sub_163, &node_8);
  rc = rcl_subscription_fini(&sub_164, &node_8);
  rc = rcl_subscription_fini(&sub_165, &node_8);
  rc = rcl_subscription_fini(&sub_166, &node_8);
  rc = rcl_subscription_fini(&sub_167, &node_8);
  rc = rcl_subscription_fini(&sub_168, &node_8);
  rc = rcl_subscription_fini(&sub_169, &node_8);
  rc = rcl_subscription_fini(&sub_170, &node_8);
  rc = rcl_subscription_fini(&sub_171, &node_8);
  rc = rcl_subscription_fini(&sub_172, &node_8);
  rc = rcl_subscription_fini(&sub_173, &node_8);
  rc = rcl_subscription_fini(&sub_174, &node_8);
  rc = rcl_subscription_fini(&sub_175, &node_8);
  rc = rcl_subscription_fini(&sub_176, &node_8);
  rc = rcl_subscription_fini(&sub_177, &node_8);
  rc = rcl_subscription_fini(&sub_178, &node_8);
  rc = rcl_subscription_fini(&sub_179, &node_8);
  rc = rcl_subscription_fini(&sub_180, &node_9);
  rc = rcl_subscription_fini(&sub_181, &node_9);
  rc = rcl_subscription_fini(&sub_182, &node_9);
  rc = rcl_subscription_fini(&sub_183, &node_9);
  rc = rcl_subscription_fini(&sub_184, &node_9);
  rc = rcl_subscription_fini(&sub_185, &node_9);
  rc = rcl_subscription_fini(&sub_186, &node_9);
  rc = rcl_subscription_fini(&sub_187, &node_9);
  rc = rcl_subscription_fini(&sub_188, &node_9);
  rc = rcl_subscription_fini(&sub_189, &node_9);
  rc = rcl_subscription_fini(&sub_190, &node_9);
  rc = rcl_subscription_fini(&sub_191, &node_9);
  rc = rcl_subscription_fini(&sub_192, &node_9);
  rc = rcl_subscription_fini(&sub_193, &node_9);
  rc = rcl_subscription_fini(&sub_194, &node_9);
  rc = rcl_subscription_fini(&sub_195, &node_9);
  rc = rcl_subscription_fini(&sub_196, &node_9);
  rc = rcl_subscription_fini(&sub_197, &node_9);
  rc = rcl_subscription_fini(&sub_198, &node_9);
  rc = rcl_subscription_fini(&sub_199, &node_9);

  rc = rcl_timer_fini(&timer_0);
  rc = rcl_timer_fini(&timer_1);
  rc = rcl_timer_fini(&timer_2);
  rc = rcl_timer_fini(&timer_3);
  rc = rcl_timer_fini(&timer_4);
  rc = rcl_timer_fini(&timer_5);
  rc = rcl_timer_fini(&timer_6);
  rc = rcl_timer_fini(&timer_7);
  rc = rcl_timer_fini(&timer_8);
  rc = rcl_timer_fini(&timer_9);

  rc = rcl_node_fini(&node_0);
  rc = rcl_node_fini(&node_1);
  rc = rcl_node_fini(&node_2);
  rc = rcl_node_fini(&node_3);
  rc = rcl_node_fini(&node_4);
  rc = rcl_node_fini(&node_5);
  rc = rcl_node_fini(&node_6);
  rc = rcl_node_fini(&node_7);
  rc = rcl_node_fini(&node_8);
  rc = rcl_node_fini(&node_9);
}
