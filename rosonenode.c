// Copyright (c) 2018 - for information on the respective copyright owner
// see the NOTICE file and/or the repository https://github.com/micro-ROS/rcl_executor.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/* test of library rcle_executor */
#include "rcl_executor/let_executor.h"
#include <unistd.h>
// ROS topics
#include <geometry_msgs/msg/twist.h>
#include <std_msgs/msg/string.h>
#include <std_msgs/msg/int32.h>


rcl_ret_t rc;
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
std_msgs__msg__String pub_msg;
int i=0;

/***************************** CALLBACKS *******************************************/
// subscription callbacks
void sub_00_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_00_callback msg NULL\n");
  } else {
    printf("sub_00_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_01_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_01_callback msg NULL\n");
  } else {
    printf("sub_01_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_02_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_02_callback msg NULL\n");
  } else {
    printf("sub_02_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_03_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_03_callback msg NULL\n");
  } else {
    printf("sub_03_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_04_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_04_callback msg NULL\n");
  } else {
    printf("sub_04_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_05_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_05_callback msg NULL\n");
  } else {
    printf("sub_05_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_06_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_06_callback msg NULL\n");
  } else {
    printf("sub_06_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_07_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_07_callback msg NULL\n");
  } else {
    printf("sub_07_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_08_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_08_callback msg NULL\n");
  } else {
    printf("sub_08_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_09_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_09_callback msg NULL\n");
  } else {
    printf("sub_09_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_10_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_10_callback msg NULL\n");
  } else {
    printf("sub_10_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_11_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_11_callback msg NULL\n");
  } else {
    printf("sub_11_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_12_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_12_callback msg NULL\n");
  } else {
    printf("sub_12_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_13_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_13_callback msg NULL\n");
  } else {
    printf("sub_13_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_14_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_14_callback msg NULL\n");
  } else {
    printf("sub_14_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_15_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_15_callback msg NULL\n");
  } else {
    printf("sub_15_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_16_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_16_callback msg NULL\n");
  } else {
    printf("sub_16_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_17_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_17_callback msg NULL\n");
  } else {
    printf("sub_17_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_18_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_18_callback msg NULL\n");
  } else {
    printf("sub_18_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_19_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_19_callback msg NULL\n");
  } else {
    printf("sub_19_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_20_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_20_callback msg NULL\n");
  } else {
    printf("sub_20_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_21_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_21_callback msg NULL\n");
  } else {
    printf("sub_21_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_22_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_22_callback msg NULL\n");
  } else {
    printf("sub_22_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_23_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_23_callback msg NULL\n");
  } else {
    printf("sub_23_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_24_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_24_callback msg NULL\n");
  } else {
    printf("sub_24_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_25_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_25_callback msg NULL\n");
  } else {
    printf("sub_25_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_26_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_26_callback msg NULL\n");
  } else {
    printf("sub_26_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_27_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_27_callback msg NULL\n");
  } else {
    printf("sub_27_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_28_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_28_callback msg NULL\n");
  } else {
    printf("sub_28_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_29_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_29_callback msg NULL\n");
  } else {
    printf("sub_29_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_30_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_30_callback msg NULL\n");
  } else {
    printf("sub_30_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_31_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_31_callback msg NULL\n");
  } else {
    printf("sub_31_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_32_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_32_callback msg NULL\n");
  } else {
    printf("sub_32_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_33_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_33_callback msg NULL\n");
  } else {
    printf("sub_33_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_34_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_34_callback msg NULL\n");
  } else {
    printf("sub_34_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_35_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_35_callback msg NULL\n");
  } else {
    printf("sub_35_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_36_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_36_callback msg NULL\n");
  } else {
    printf("sub_36_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_37_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_37_callback msg NULL\n");
  } else {
    printf("sub_37_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_38_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_38_callback msg NULL\n");
  } else {
    printf("sub_38_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_39_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_39_callback msg NULL\n");
  } else {
    printf("sub_39_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_40_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_40_callback msg NULL\n");
  } else {
    printf("sub_40_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_41_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_41_callback msg NULL\n");
  } else {
    printf("sub_41_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_42_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_42_callback msg NULL\n");
  } else {
    printf("sub_42_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_43_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_43_callback msg NULL\n");
  } else {
    printf("sub_43_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_44_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_44_callback msg NULL\n");
  } else {
    printf("sub_44_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_45_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_45_callback msg NULL\n");
  } else {
    printf("sub_45_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_46_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_46_callback msg NULL\n");
  } else {
    printf("sub_46_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_47_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_47_callback msg NULL\n");
  } else {
    printf("sub_47_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_48_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_48_callback msg NULL\n");
  } else {
    printf("sub_48_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_49_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_49_callback msg NULL\n");
  } else {
    printf("sub_49_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_50_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_50_callback msg NULL\n");
  } else {
    printf("sub_50_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_51_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_51_callback msg NULL\n");
  } else {
    printf("sub_51_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_52_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_52_callback msg NULL\n");
  } else {
    printf("sub_52_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_53_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_53_callback msg NULL\n");
  } else {
    printf("sub_53_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_54_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_54_callback msg NULL\n");
  } else {
    printf("sub_54_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_55_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_55_callback msg NULL\n");
  } else {
    printf("sub_55_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_56_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_56_callback msg NULL\n");
  } else {
    printf("sub_56_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_57_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_57_callback msg NULL\n");
  } else {
    printf("sub_57_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_58_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_58_callback msg NULL\n");
  } else {
    printf("sub_58_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_59_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_59_callback msg NULL\n");
  } else {
    printf("sub_59_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_60_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_60_callback msg NULL\n");
  } else {
    printf("sub_60_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_61_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_61_callback msg NULL\n");
  } else {
    printf("sub_61_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_62_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_62_callback msg NULL\n");
  } else {
    printf("sub_62_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_63_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_63_callback msg NULL\n");
  } else {
    printf("sub_63_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_64_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_64_callback msg NULL\n");
  } else {
    printf("sub_64_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_65_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_65_callback msg NULL\n");
  } else {
    printf("sub_65_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_66_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_66_callback msg NULL\n");
  } else {
    printf("sub_66_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_67_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_67_callback msg NULL\n");
  } else {
    printf("sub_67_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_68_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_68_callback msg NULL\n");
  } else {
    printf("sub_68_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_69_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_69_callback msg NULL\n");
  } else {
    printf("sub_69_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_70_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_70_callback msg NULL\n");
  } else {
    printf("sub_70_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_71_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_71_callback msg NULL\n");
  } else {
    printf("sub_71_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_72_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_72_callback msg NULL\n");
  } else {
    printf("sub_72_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_73_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_73_callback msg NULL\n");
  } else {
    printf("sub_73_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_74_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_74_callback msg NULL\n");
  } else {
    printf("sub_74_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_75_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_75_callback msg NULL\n");
  } else {
    printf("sub_75_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_76_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_76_callback msg NULL\n");
  } else {
    printf("sub_76_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_77_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_77_callback msg NULL\n");
  } else {
    printf("sub_77_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_78_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_78_callback msg NULL\n");
  } else {
    printf("sub_78_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_79_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_79_callback msg NULL\n");
  } else {
    printf("sub_79_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_80_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_80_callback msg NULL\n");
  } else {
    printf("sub_80_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_81_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_81_callback msg NULL\n");
  } else {
    printf("sub_81_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_82_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_82_callback msg NULL\n");
  } else {
    printf("sub_82_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_83_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_83_callback msg NULL\n");
  } else {
    printf("sub_83_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_84_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_84_callback msg NULL\n");
  } else {
    printf("sub_84_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_85_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_85_callback msg NULL\n");
  } else {
    printf("sub_85_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_86_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_86_callback msg NULL\n");
  } else {
    printf("sub_86_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_87_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_87_callback msg NULL\n");
  } else {
    printf("sub_87_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_88_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_88_callback msg NULL\n");
  } else {
    printf("sub_88_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_89_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_89_callback msg NULL\n");
  } else {
    printf("sub_89_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_90_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_90_callback msg NULL\n");
  } else {
    printf("sub_90_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_91_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_91_callback msg NULL\n");
  } else {
    printf("sub_91_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_92_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_92_callback msg NULL\n");
  } else {
    printf("sub_92_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_93_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_93_callback msg NULL\n");
  } else {
    printf("sub_93_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_94_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_94_callback msg NULL\n");
  } else {
    printf("sub_94_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_95_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_95_callback msg NULL\n");
  } else {
    printf("sub_95_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_96_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_96_callback msg NULL\n");
  } else {
    printf("sub_96_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_97_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_97_callback msg NULL\n");
  } else {
    printf("sub_97_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_98_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_98_callback msg NULL\n");
  } else {
    printf("sub_98_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_99_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_99_callback msg NULL\n");
  } else {
    printf("sub_99_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_100_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_100_callback msg NULL\n");
  } else {
    printf("sub_100_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_101_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_101_callback msg NULL\n");
  } else {
    printf("sub_101_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_102_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_102_callback msg NULL\n");
  } else {
    printf("sub_102_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_103_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_103_callback msg NULL\n");
  } else {
    printf("sub_103_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_104_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_104_callback msg NULL\n");
  } else {
    printf("sub_104_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_105_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_105_callback msg NULL\n");
  } else {
    printf("sub_105_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_106_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_106_callback msg NULL\n");
  } else {
    printf("sub_106_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_107_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_107_callback msg NULL\n");
  } else {
    printf("sub_107_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_108_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_108_callback msg NULL\n");
  } else {
    printf("sub_108_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_109_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_109_callback msg NULL\n");
  } else {
    printf("sub_109_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_110_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_110_callback msg NULL\n");
  } else {
    printf("sub_110_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_111_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_111_callback msg NULL\n");
  } else {
    printf("sub_111_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_112_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_112_callback msg NULL\n");
  } else {
    printf("sub_112_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_113_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_113_callback msg NULL\n");
  } else {
    printf("sub_113_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_114_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_114_callback msg NULL\n");
  } else {
    printf("sub_114_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_115_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_115_callback msg NULL\n");
  } else {
    printf("sub_115_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_116_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_116_callback msg NULL\n");
  } else {
    printf("sub_116_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_117_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_117_callback msg NULL\n");
  } else {
    printf("sub_117_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_118_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_118_callback msg NULL\n");
  } else {
    printf("sub_118_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_119_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_119_callback msg NULL\n");
  } else {
    printf("sub_119_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_120_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_120_callback msg NULL\n");
  } else {
    printf("sub_120_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_121_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_121_callback msg NULL\n");
  } else {
    printf("sub_121_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_122_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_122_callback msg NULL\n");
  } else {
    printf("sub_122_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_123_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_123_callback msg NULL\n");
  } else {
    printf("sub_123_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_124_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_124_callback msg NULL\n");
  } else {
    printf("sub_124_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_125_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_125_callback msg NULL\n");
  } else {
    printf("sub_125_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_126_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_126_callback msg NULL\n");
  } else {
    printf("sub_126_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_127_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_127_callback msg NULL\n");
  } else {
    printf("sub_127_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_128_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_128_callback msg NULL\n");
  } else {
    printf("sub_128_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_129_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_129_callback msg NULL\n");
  } else {
    printf("sub_129_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_130_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_130_callback msg NULL\n");
  } else {
    printf("sub_130_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_131_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_131_callback msg NULL\n");
  } else {
    printf("sub_131_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_132_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_132_callback msg NULL\n");
  } else {
    printf("sub_132_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_133_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_133_callback msg NULL\n");
  } else {
    printf("sub_133_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_134_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_134_callback msg NULL\n");
  } else {
    printf("sub_134_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_135_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_135_callback msg NULL\n");
  } else {
    printf("sub_135_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_136_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_136_callback msg NULL\n");
  } else {
    printf("sub_136_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_137_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_137_callback msg NULL\n");
  } else {
    printf("sub_137_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_138_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_138_callback msg NULL\n");
  } else {
    printf("sub_138_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_139_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_139_callback msg NULL\n");
  } else {
    printf("sub_139_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_140_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_140_callback msg NULL\n");
  } else {
    printf("sub_140_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_141_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_141_callback msg NULL\n");
  } else {
    printf("sub_141_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_142_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_142_callback msg NULL\n");
  } else {
    printf("sub_142_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_143_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_143_callback msg NULL\n");
  } else {
    printf("sub_143_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_144_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_144_callback msg NULL\n");
  } else {
    printf("sub_144_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_145_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_145_callback msg NULL\n");
  } else {
    printf("sub_145_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_146_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_146_callback msg NULL\n");
  } else {
    printf("sub_146_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_147_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_147_callback msg NULL\n");
  } else {
    printf("sub_147_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_148_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_148_callback msg NULL\n");
  } else {
    printf("sub_148_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_149_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_149_callback msg NULL\n");
  } else {
    printf("sub_149_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_150_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_150_callback msg NULL\n");
  } else {
    printf("sub_150_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_151_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_151_callback msg NULL\n");
  } else {
    printf("sub_151_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_152_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_152_callback msg NULL\n");
  } else {
    printf("sub_152_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_153_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_153_callback msg NULL\n");
  } else {
    printf("sub_153_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_154_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_154_callback msg NULL\n");
  } else {
    printf("sub_154_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_155_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_155_callback msg NULL\n");
  } else {
    printf("sub_155_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_156_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_156_callback msg NULL\n");
  } else {
    printf("sub_156_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_157_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_157_callback msg NULL\n");
  } else {
    printf("sub_157_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_158_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_158_callback msg NULL\n");
  } else {
    printf("sub_158_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_159_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_159_callback msg NULL\n");
  } else {
    printf("sub_159_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_160_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_160_callback msg NULL\n");
  } else {
    printf("sub_160_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_161_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_161_callback msg NULL\n");
  } else {
    printf("sub_161_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_162_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_162_callback msg NULL\n");
  } else {
    printf("sub_162_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_163_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_163_callback msg NULL\n");
  } else {
    printf("sub_163_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_164_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_164_callback msg NULL\n");
  } else {
    printf("sub_164_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_165_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_165_callback msg NULL\n");
  } else {
    printf("sub_165_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_166_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_166_callback msg NULL\n");
  } else {
    printf("sub_166_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_167_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_167_callback msg NULL\n");
  } else {
    printf("sub_167_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_168_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_168_callback msg NULL\n");
  } else {
    printf("sub_168_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_169_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_169_callback msg NULL\n");
  } else {
    printf("sub_169_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_170_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_170_callback msg NULL\n");
  } else {
    printf("sub_170_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_171_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_171_callback msg NULL\n");
  } else {
    printf("sub_171_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_172_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_172_callback msg NULL\n");
  } else {
    printf("sub_172_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_173_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_173_callback msg NULL\n");
  } else {
    printf("sub_173_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_174_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_174_callback msg NULL\n");
  } else {
    printf("sub_174_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_175_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_175_callback msg NULL\n");
  } else {
    printf("sub_175_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_176_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_176_callback msg NULL\n");
  } else {
    printf("sub_176_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_177_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_177_callback msg NULL\n");
  } else {
    printf("sub_177_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_178_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_178_callback msg NULL\n");
  } else {
    printf("sub_178_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_179_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_179_callback msg NULL\n");
  } else {
    printf("sub_179_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_180_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_180_callback msg NULL\n");
  } else {
    printf("sub_180_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_181_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_181_callback msg NULL\n");
  } else {
    printf("sub_181_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_182_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_182_callback msg NULL\n");
  } else {
    printf("sub_182_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_183_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_183_callback msg NULL\n");
  } else {
    printf("sub_183_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_184_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_184_callback msg NULL\n");
  } else {
    printf("sub_184_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_185_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_185_callback msg NULL\n");
  } else {
    printf("sub_185_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_186_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_186_callback msg NULL\n");
  } else {
    printf("sub_186_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_187_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_187_callback msg NULL\n");
  } else {
    printf("sub_187_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_188_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_188_callback msg NULL\n");
  } else {
    printf("sub_188_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_189_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_189_callback msg NULL\n");
  } else {
    printf("sub_189_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_190_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_190_callback msg NULL\n");
  } else {
    printf("sub_190_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_191_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_191_callback msg NULL\n");
  } else {
    printf("sub_191_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_192_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_192_callback msg NULL\n");
  } else {
    printf("sub_192_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_193_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_193_callback msg NULL\n");
  } else {
    printf("sub_193_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_194_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_194_callback msg NULL\n");
  } else {
    printf("sub_194_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_195_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_195_callback msg NULL\n");
  } else {
    printf("sub_195_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_196_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_196_callback msg NULL\n");
  } else {
    printf("sub_196_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_197_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_197_callback msg NULL\n");
  } else {
    printf("sub_197_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_198_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_198_callback msg NULL\n");
  } else {
    printf("sub_198_callback': I heard: %s\n", msg->data.data);
  }
}

void sub_199_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("sub_199_callback msg NULL\n");
  } else {
    printf("sub_199_callback': I heard: %s\n", msg->data.data);
  }
}

// timer callbacks
void timer_0_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  if (timer != NULL) {
    printf("Timer: time since last call %d\n", (int) last_call_time);
  }
  i++;
  printf("Publishing: %s\n", pub_msg.data.data);
  rc = rcl_publish(&pub_0, &pub_msg, NULL);
  rc = rcl_publish(&pub_10, &pub_msg, NULL);
}

void timer_1_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  if (timer != NULL) {
    printf("Timer: time since last call %d\n", (int) last_call_time);
  }
  i++;
  printf("Publishing: %s\n", pub_msg.data.data);
  rc = rcl_publish(&pub_1, &pub_msg, NULL);
  rc = rcl_publish(&pub_11, &pub_msg, NULL);
}

void timer_2_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  if (timer != NULL) {
    printf("Timer: time since last call %d\n", (int) last_call_time);
  }
  i++;
  printf("Publishing: %s\n", pub_msg.data.data);
  rc = rcl_publish(&pub_2, &pub_msg, NULL);
  rc = rcl_publish(&pub_12, &pub_msg, NULL);
}

void timer_3_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  if (timer != NULL) {
    printf("Timer: time since last call %d\n", (int) last_call_time);
  }
  i++;
  printf("Publishing: %s\n", pub_msg.data.data);
  rc = rcl_publish(&pub_3, &pub_msg, NULL);
  rc = rcl_publish(&pub_13, &pub_msg, NULL);
}

void timer_4_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  if (timer != NULL) {
    printf("Timer: time since last call %d\n", (int) last_call_time);
  }
  i++;
  printf("Publishing: %s\n", pub_msg.data.data);
  rc = rcl_publish(&pub_4, &pub_msg, NULL);
  rc = rcl_publish(&pub_14, &pub_msg, NULL);
}

void timer_5_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  if (timer != NULL) {
    printf("Timer: time since last call %d\n", (int) last_call_time);
  }
  i++;
  printf("Publishing: %s\n", pub_msg.data.data);
  rc = rcl_publish(&pub_5, &pub_msg, NULL);
  rc = rcl_publish(&pub_15, &pub_msg, NULL);
}

void timer_6_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  if (timer != NULL) {
    printf("Timer: time since last call %d\n", (int) last_call_time);
  }
  i++;
  printf("Publishing: %s\n", pub_msg.data.data);
  rc = rcl_publish(&pub_6, &pub_msg, NULL);
  rc = rcl_publish(&pub_16, &pub_msg, NULL);
}

void timer_7_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  if (timer != NULL) {
    printf("Timer: time since last call %d\n", (int) last_call_time);
  }
  i++;
  printf("Publishing: %s\n", pub_msg.data.data);
  rc = rcl_publish(&pub_7, &pub_msg, NULL);
  rc = rcl_publish(&pub_17, &pub_msg, NULL);
}

void timer_8_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  if (timer != NULL) {
    printf("Timer: time since last call %d\n", (int) last_call_time);
  }
  i++;
  printf("Publishing: %s\n", pub_msg.data.data);
  rc = rcl_publish(&pub_8, &pub_msg, NULL);
  rc = rcl_publish(&pub_18, &pub_msg, NULL);
}

void timer_9_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  if (timer != NULL) {
    printf("Timer: time since last call %d\n", (int) last_call_time);
  }
  i++;
  printf("Publishing: %s\n", pub_msg.data.data);
  rc = rcl_publish(&pub_9, &pub_msg, NULL);
  rc = rcl_publish(&pub_19, &pub_msg, NULL);
}

/******************** MAIN PROGRAM **************************************/
int main(int argc, const char * argv[])
{
  // rcl node initialization
  rcl_context_t context;                // global static var in rcl
  rcl_init_options_t init_options;      // global static var in rcl

  init_options = rcl_get_zero_initialized_init_options();
  rc = rcl_init_options_init(&init_options, rcl_get_default_allocator());
  if (rc != RCL_RET_OK) {
    PRINT_RCL_ERROR(rt_executor, rcl_init_options_init);
    return -1;
  }

  context = rcl_get_zero_initialized_context();
  rc = rcl_init(argc, argv, &init_options, &context);
  if (rc != RCL_RET_OK) {
    PRINT_RCL_ERROR(init, rcl_init);
    return -1;
  }

  rc = rcl_init_options_fini(&init_options);

  rcl_node_t node = rcl_get_zero_initialized_node();
  rcl_node_options_t node_ops = rcl_node_get_default_options();

  rc = rcl_node_init(&node, "node_1", "", &context, &node_ops);
  if (rc != RCL_RET_OK) {
    PRINT_RCL_ERROR(create_node, rcl_node_init);
    return -1;
  } else {
    // create sub topics
    const char * sub_topic_0 = "topic_0";
    const char * sub_topic_1 = "topic_1";
    const char * sub_topic_2 = "topic_2";
    const char * sub_topic_3 = "topic_3";
    const char * sub_topic_4 = "topic_4";
    const char * sub_topic_5 = "topic_5";
    const char * sub_topic_6 = "topic_6";
    const char * sub_topic_7 = "topic_7";
    const char * sub_topic_8 = "topic_8";
    const char * sub_topic_9 = "topic_9";
    const char * sub_topic_10 = "topic_10";
    const char * sub_topic_11 = "topic_11";
    const char * sub_topic_12 = "topic_12";
    const char * sub_topic_13 = "topic_13";
    const char * sub_topic_14 = "topic_14";
    const char * sub_topic_15 = "topic_15";
    const char * sub_topic_16 = "topic_16";
    const char * sub_topic_17 = "topic_17";
    const char * sub_topic_18 = "topic_18";
    const char * sub_topic_19 = "topic_19";

    // default subscriber options + type support
    rcl_subscription_options_t subscription_ops = rcl_subscription_get_default_options();
    const rosidl_message_type_support_t * sub_type_support = ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs,
        msg,
        String);

    // create subscriptions
    rcl_subscription_t sub_00 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg00;
    rc = rcl_subscription_init(
      &sub_00,
      &node,
      sub_type_support,
      sub_topic_0,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_0);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_0);
    }

    rcl_subscription_t sub_01 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg01;
    rc = rcl_subscription_init(
      &sub_01,
      &node,
      sub_type_support,
      sub_topic_0,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_0);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_0);
    }

    rcl_subscription_t sub_02 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg02;
    rc = rcl_subscription_init(
      &sub_02,
      &node,
      sub_type_support,
      sub_topic_0,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_0);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_0);
    }

    rcl_subscription_t sub_03 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg03;
    rc = rcl_subscription_init(
      &sub_03,
      &node,
      sub_type_support,
      sub_topic_0,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_0);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_0);
    }

    rcl_subscription_t sub_04 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg04;
    rc = rcl_subscription_init(
      &sub_04,
      &node,
      sub_type_support,
      sub_topic_0,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_0);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_0);
    }

    rcl_subscription_t sub_05 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg05;
    rc = rcl_subscription_init(
      &sub_05,
      &node,
      sub_type_support,
      sub_topic_0,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_0);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_0);
    }

    rcl_subscription_t sub_06 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg06;
    rc = rcl_subscription_init(
      &sub_06,
      &node,
      sub_type_support,
      sub_topic_0,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_0);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_0);
    }

    rcl_subscription_t sub_07 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg07;
    rc = rcl_subscription_init(
      &sub_07,
      &node,
      sub_type_support,
      sub_topic_0,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_0);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_0);
    }

    rcl_subscription_t sub_08 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg08;
    rc = rcl_subscription_init(
      &sub_08,
      &node,
      sub_type_support,
      sub_topic_0,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_0);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_0);
    }

    rcl_subscription_t sub_09 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg09;
    rc = rcl_subscription_init(
      &sub_09,
      &node,
      sub_type_support,
      sub_topic_0,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_0);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_0);
    }

    rcl_subscription_t sub_10 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg10;
    rc = rcl_subscription_init(
      &sub_10,
      &node,
      sub_type_support,
      sub_topic_1,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_1);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_1);
    }

    rcl_subscription_t sub_11 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg11;
    rc = rcl_subscription_init(
      &sub_11,
      &node,
      sub_type_support,
      sub_topic_1,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_1);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_1);
    }

    rcl_subscription_t sub_12 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg12;
    rc = rcl_subscription_init(
      &sub_12,
      &node,
      sub_type_support,
      sub_topic_1,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_1);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_1);
    }

    rcl_subscription_t sub_13 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg13;
    rc = rcl_subscription_init(
      &sub_13,
      &node,
      sub_type_support,
      sub_topic_1,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_1);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_1);
    }

    rcl_subscription_t sub_14 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg14;
    rc = rcl_subscription_init(
      &sub_14,
      &node,
      sub_type_support,
      sub_topic_1,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_1);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_1);
    }

    rcl_subscription_t sub_15 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg15;
    rc = rcl_subscription_init(
      &sub_15,
      &node,
      sub_type_support,
      sub_topic_1,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_1);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_1);
    }

    rcl_subscription_t sub_16 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg16;
    rc = rcl_subscription_init(
      &sub_16,
      &node,
      sub_type_support,
      sub_topic_1,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_1);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_1);
    }

    rcl_subscription_t sub_17 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg17;
    rc = rcl_subscription_init(
      &sub_17,
      &node,
      sub_type_support,
      sub_topic_1,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_1);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_1);
    }

    rcl_subscription_t sub_18 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg18;
    rc = rcl_subscription_init(
      &sub_18,
      &node,
      sub_type_support,
      sub_topic_1,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_1);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_1);
    }

    rcl_subscription_t sub_19 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg19;
    rc = rcl_subscription_init(
      &sub_19,
      &node,
      sub_type_support,
      sub_topic_1,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_1);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_1);
    }

    rcl_subscription_t sub_20 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg20;
    rc = rcl_subscription_init(
      &sub_20,
      &node,
      sub_type_support,
      sub_topic_2,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_2);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_2);
    }

    rcl_subscription_t sub_21 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg21;
    rc = rcl_subscription_init(
      &sub_21,
      &node,
      sub_type_support,
      sub_topic_2,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_2);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_2);
    }

    rcl_subscription_t sub_22 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg22;
    rc = rcl_subscription_init(
      &sub_22,
      &node,
      sub_type_support,
      sub_topic_2,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_2);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_2);
    }

    rcl_subscription_t sub_23 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg23;
    rc = rcl_subscription_init(
      &sub_23,
      &node,
      sub_type_support,
      sub_topic_2,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_2);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_2);
    }

    rcl_subscription_t sub_24 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg24;
    rc = rcl_subscription_init(
      &sub_24,
      &node,
      sub_type_support,
      sub_topic_2,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_2);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_2);
    }

    rcl_subscription_t sub_25 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg25;
    rc = rcl_subscription_init(
      &sub_25,
      &node,
      sub_type_support,
      sub_topic_2,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_2);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_2);
    }

    rcl_subscription_t sub_26 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg26;
    rc = rcl_subscription_init(
      &sub_26,
      &node,
      sub_type_support,
      sub_topic_2,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_2);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_2);
    }

    rcl_subscription_t sub_27 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg27;
    rc = rcl_subscription_init(
      &sub_27,
      &node,
      sub_type_support,
      sub_topic_2,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_2);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_2);
    }

    rcl_subscription_t sub_28 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg28;
    rc = rcl_subscription_init(
      &sub_28,
      &node,
      sub_type_support,
      sub_topic_2,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_2);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_2);
    }

    rcl_subscription_t sub_29 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg29;
    rc = rcl_subscription_init(
      &sub_29,
      &node,
      sub_type_support,
      sub_topic_2,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_2);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_2);
    }

    rcl_subscription_t sub_30 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg30;
    rc = rcl_subscription_init(
      &sub_30,
      &node,
      sub_type_support,
      sub_topic_3,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_3);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_3);
    }

    rcl_subscription_t sub_31 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg31;
    rc = rcl_subscription_init(
      &sub_31,
      &node,
      sub_type_support,
      sub_topic_3,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_3);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_3);
    }

    rcl_subscription_t sub_32 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg32;
    rc = rcl_subscription_init(
      &sub_32,
      &node,
      sub_type_support,
      sub_topic_3,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_3);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_3);
    }

    rcl_subscription_t sub_33 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg33;
    rc = rcl_subscription_init(
      &sub_33,
      &node,
      sub_type_support,
      sub_topic_3,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_3);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_3);
    }

    rcl_subscription_t sub_34 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg34;
    rc = rcl_subscription_init(
      &sub_34,
      &node,
      sub_type_support,
      sub_topic_3,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_3);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_3);
    }

    rcl_subscription_t sub_35 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg35;
    rc = rcl_subscription_init(
      &sub_35,
      &node,
      sub_type_support,
      sub_topic_3,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_3);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_3);
    }

    rcl_subscription_t sub_36 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg36;
    rc = rcl_subscription_init(
      &sub_36,
      &node,
      sub_type_support,
      sub_topic_3,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_3);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_3);
    }

    rcl_subscription_t sub_37 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg37;
    rc = rcl_subscription_init(
      &sub_37,
      &node,
      sub_type_support,
      sub_topic_3,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_3);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_3);
    }

    rcl_subscription_t sub_38 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg38;
    rc = rcl_subscription_init(
      &sub_38,
      &node,
      sub_type_support,
      sub_topic_3,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_3);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_3);
    }

    rcl_subscription_t sub_39 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg39;
    rc = rcl_subscription_init(
      &sub_39,
      &node,
      sub_type_support,
      sub_topic_3,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_3);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_3);
    }

    rcl_subscription_t sub_40 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg40;
    rc = rcl_subscription_init(
      &sub_40,
      &node,
      sub_type_support,
      sub_topic_4,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_4);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_4);
    }

    rcl_subscription_t sub_41 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg41;
    rc = rcl_subscription_init(
      &sub_41,
      &node,
      sub_type_support,
      sub_topic_4,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_4);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_4);
    }

    rcl_subscription_t sub_42 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg42;
    rc = rcl_subscription_init(
      &sub_42,
      &node,
      sub_type_support,
      sub_topic_4,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_4);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_4);
    }

    rcl_subscription_t sub_43 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg43;
    rc = rcl_subscription_init(
      &sub_43,
      &node,
      sub_type_support,
      sub_topic_4,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_4);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_4);
    }

    rcl_subscription_t sub_44 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg44;
    rc = rcl_subscription_init(
      &sub_44,
      &node,
      sub_type_support,
      sub_topic_4,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_4);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_4);
    }

    rcl_subscription_t sub_45 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg45;
    rc = rcl_subscription_init(
      &sub_45,
      &node,
      sub_type_support,
      sub_topic_4,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_4);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_4);
    }

    rcl_subscription_t sub_46 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg46;
    rc = rcl_subscription_init(
      &sub_46,
      &node,
      sub_type_support,
      sub_topic_4,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_4);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_4);
    }

    rcl_subscription_t sub_47 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg47;
    rc = rcl_subscription_init(
      &sub_47,
      &node,
      sub_type_support,
      sub_topic_4,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_4);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_4);
    }

    rcl_subscription_t sub_48 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg48;
    rc = rcl_subscription_init(
      &sub_48,
      &node,
      sub_type_support,
      sub_topic_4,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_4);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_4);
    }

    rcl_subscription_t sub_49 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg49;
    rc = rcl_subscription_init(
      &sub_49,
      &node,
      sub_type_support,
      sub_topic_4,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_4);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_4);
    }

    rcl_subscription_t sub_50 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg50;
    rc = rcl_subscription_init(
      &sub_50,
      &node,
      sub_type_support,
      sub_topic_5,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_5);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_5);
    }

    rcl_subscription_t sub_51 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg51;
    rc = rcl_subscription_init(
      &sub_51,
      &node,
      sub_type_support,
      sub_topic_5,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_5);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_5);
    }

    rcl_subscription_t sub_52 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg52;
    rc = rcl_subscription_init(
      &sub_52,
      &node,
      sub_type_support,
      sub_topic_5,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_5);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_5);
    }

    rcl_subscription_t sub_53 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg53;
    rc = rcl_subscription_init(
      &sub_53,
      &node,
      sub_type_support,
      sub_topic_5,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_5);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_5);
    }

    rcl_subscription_t sub_54 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg54;
    rc = rcl_subscription_init(
      &sub_54,
      &node,
      sub_type_support,
      sub_topic_5,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_5);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_5);
    }

    rcl_subscription_t sub_55 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg55;
    rc = rcl_subscription_init(
      &sub_55,
      &node,
      sub_type_support,
      sub_topic_5,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_5);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_5);
    }

    rcl_subscription_t sub_56 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg56;
    rc = rcl_subscription_init(
      &sub_56,
      &node,
      sub_type_support,
      sub_topic_5,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_5);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_5);
    }

    rcl_subscription_t sub_57 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg57;
    rc = rcl_subscription_init(
      &sub_57,
      &node,
      sub_type_support,
      sub_topic_5,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_5);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_5);
    }

    rcl_subscription_t sub_58 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg58;
    rc = rcl_subscription_init(
      &sub_58,
      &node,
      sub_type_support,
      sub_topic_5,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_5);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_5);
    }

    rcl_subscription_t sub_59 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg59;
    rc = rcl_subscription_init(
      &sub_59,
      &node,
      sub_type_support,
      sub_topic_5,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_5);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_5);
    }

    rcl_subscription_t sub_60 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg60;
    rc = rcl_subscription_init(
      &sub_60,
      &node,
      sub_type_support,
      sub_topic_6,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_6);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_6);
    }

    rcl_subscription_t sub_61 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg61;
    rc = rcl_subscription_init(
      &sub_61,
      &node,
      sub_type_support,
      sub_topic_6,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_6);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_6);
    }

    rcl_subscription_t sub_62 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg62;
    rc = rcl_subscription_init(
      &sub_62,
      &node,
      sub_type_support,
      sub_topic_6,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_6);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_6);
    }

    rcl_subscription_t sub_63 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg63;
    rc = rcl_subscription_init(
      &sub_63,
      &node,
      sub_type_support,
      sub_topic_6,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_6);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_6);
    }

    rcl_subscription_t sub_64 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg64;
    rc = rcl_subscription_init(
      &sub_64,
      &node,
      sub_type_support,
      sub_topic_6,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_6);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_6);
    }

    rcl_subscription_t sub_65 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg65;
    rc = rcl_subscription_init(
      &sub_65,
      &node,
      sub_type_support,
      sub_topic_6,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_6);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_6);
    }

    rcl_subscription_t sub_66 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg66;
    rc = rcl_subscription_init(
      &sub_66,
      &node,
      sub_type_support,
      sub_topic_6,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_6);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_6);
    }

    rcl_subscription_t sub_67 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg67;
    rc = rcl_subscription_init(
      &sub_67,
      &node,
      sub_type_support,
      sub_topic_6,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_6);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_6);
    }

    rcl_subscription_t sub_68 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg68;
    rc = rcl_subscription_init(
      &sub_68,
      &node,
      sub_type_support,
      sub_topic_6,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_6);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_6);
    }

    rcl_subscription_t sub_69 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg69;
    rc = rcl_subscription_init(
      &sub_69,
      &node,
      sub_type_support,
      sub_topic_6,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_6);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_6);
    }

    rcl_subscription_t sub_70 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg70;
    rc = rcl_subscription_init(
      &sub_70,
      &node,
      sub_type_support,
      sub_topic_7,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_7);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_7);
    }

    rcl_subscription_t sub_71 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg71;
    rc = rcl_subscription_init(
      &sub_71,
      &node,
      sub_type_support,
      sub_topic_7,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_7);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_7);
    }

    rcl_subscription_t sub_72 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg72;
    rc = rcl_subscription_init(
      &sub_72,
      &node,
      sub_type_support,
      sub_topic_7,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_7);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_7);
    }

    rcl_subscription_t sub_73 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg73;
    rc = rcl_subscription_init(
      &sub_73,
      &node,
      sub_type_support,
      sub_topic_7,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_7);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_7);
    }

    rcl_subscription_t sub_74 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg74;
    rc = rcl_subscription_init(
      &sub_74,
      &node,
      sub_type_support,
      sub_topic_7,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_7);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_7);
    }

    rcl_subscription_t sub_75 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg75;
    rc = rcl_subscription_init(
      &sub_75,
      &node,
      sub_type_support,
      sub_topic_7,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_7);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_7);
    }

    rcl_subscription_t sub_76 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg76;
    rc = rcl_subscription_init(
      &sub_76,
      &node,
      sub_type_support,
      sub_topic_7,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_7);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_7);
    }

    rcl_subscription_t sub_77 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg77;
    rc = rcl_subscription_init(
      &sub_77,
      &node,
      sub_type_support,
      sub_topic_7,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_7);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_7);
    }

    rcl_subscription_t sub_78 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg78;
    rc = rcl_subscription_init(
      &sub_78,
      &node,
      sub_type_support,
      sub_topic_7,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_7);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_7);
    }

    rcl_subscription_t sub_79 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg79;
    rc = rcl_subscription_init(
      &sub_79,
      &node,
      sub_type_support,
      sub_topic_7,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_7);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_7);
    }

    rcl_subscription_t sub_80 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg80;
    rc = rcl_subscription_init(
      &sub_80,
      &node,
      sub_type_support,
      sub_topic_8,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_8);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_8);
    }

    rcl_subscription_t sub_81 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg81;
    rc = rcl_subscription_init(
      &sub_81,
      &node,
      sub_type_support,
      sub_topic_8,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_8);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_8);
    }

    rcl_subscription_t sub_82 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg82;
    rc = rcl_subscription_init(
      &sub_82,
      &node,
      sub_type_support,
      sub_topic_8,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_8);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_8);
    }

    rcl_subscription_t sub_83 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg83;
    rc = rcl_subscription_init(
      &sub_83,
      &node,
      sub_type_support,
      sub_topic_8,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_8);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_8);
    }

    rcl_subscription_t sub_84 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg84;
    rc = rcl_subscription_init(
      &sub_84,
      &node,
      sub_type_support,
      sub_topic_8,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_8);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_8);
    }

    rcl_subscription_t sub_85 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg85;
    rc = rcl_subscription_init(
      &sub_85,
      &node,
      sub_type_support,
      sub_topic_8,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_8);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_8);
    }

    rcl_subscription_t sub_86 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg86;
    rc = rcl_subscription_init(
      &sub_86,
      &node,
      sub_type_support,
      sub_topic_8,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_8);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_8);
    }

    rcl_subscription_t sub_87 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg87;
    rc = rcl_subscription_init(
      &sub_87,
      &node,
      sub_type_support,
      sub_topic_8,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_8);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_8);
    }

    rcl_subscription_t sub_88 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg88;
    rc = rcl_subscription_init(
      &sub_88,
      &node,
      sub_type_support,
      sub_topic_8,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_8);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_8);
    }

    rcl_subscription_t sub_89 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg89;
    rc = rcl_subscription_init(
      &sub_89,
      &node,
      sub_type_support,
      sub_topic_8,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_8);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_8);
    }

    rcl_subscription_t sub_90 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg90;
    rc = rcl_subscription_init(
      &sub_90,
      &node,
      sub_type_support,
      sub_topic_9,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_9);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_9);
    }

    rcl_subscription_t sub_91 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg91;
    rc = rcl_subscription_init(
      &sub_91,
      &node,
      sub_type_support,
      sub_topic_9,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_9);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_9);
    }

    rcl_subscription_t sub_92 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg92;
    rc = rcl_subscription_init(
      &sub_92,
      &node,
      sub_type_support,
      sub_topic_9,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_9);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_9);
    }

    rcl_subscription_t sub_93 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg93;
    rc = rcl_subscription_init(
      &sub_93,
      &node,
      sub_type_support,
      sub_topic_9,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_9);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_9);
    }

    rcl_subscription_t sub_94 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg94;
    rc = rcl_subscription_init(
      &sub_94,
      &node,
      sub_type_support,
      sub_topic_9,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_9);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_9);
    }

    rcl_subscription_t sub_95 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg95;
    rc = rcl_subscription_init(
      &sub_95,
      &node,
      sub_type_support,
      sub_topic_9,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_9);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_9);
    }

    rcl_subscription_t sub_96 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg96;
    rc = rcl_subscription_init(
      &sub_96,
      &node,
      sub_type_support,
      sub_topic_9,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_9);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_9);
    }

    rcl_subscription_t sub_97 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg97;
    rc = rcl_subscription_init(
      &sub_97,
      &node,
      sub_type_support,
      sub_topic_9,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_9);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_9);
    }

    rcl_subscription_t sub_98 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg98;
    rc = rcl_subscription_init(
      &sub_98,
      &node,
      sub_type_support,
      sub_topic_9,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_9);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_9);
    }

    rcl_subscription_t sub_99 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg99;
    rc = rcl_subscription_init(
      &sub_99,
      &node,
      sub_type_support,
      sub_topic_9,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_9);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_9);
    }

    rcl_subscription_t sub_100 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg100;
    rc = rcl_subscription_init(
      &sub_100,
      &node,
      sub_type_support,
      sub_topic_10,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_10);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_10);
    }

    rcl_subscription_t sub_101 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg101;
    rc = rcl_subscription_init(
      &sub_101,
      &node,
      sub_type_support,
      sub_topic_10,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_10);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_10);
    }

    rcl_subscription_t sub_102 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg102;
    rc = rcl_subscription_init(
      &sub_102,
      &node,
      sub_type_support,
      sub_topic_10,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_10);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_10);
    }

    rcl_subscription_t sub_103 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg103;
    rc = rcl_subscription_init(
      &sub_103,
      &node,
      sub_type_support,
      sub_topic_10,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_10);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_10);
    }

    rcl_subscription_t sub_104 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg104;
    rc = rcl_subscription_init(
      &sub_104,
      &node,
      sub_type_support,
      sub_topic_10,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_10);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_10);
    }

    rcl_subscription_t sub_105 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg105;
    rc = rcl_subscription_init(
      &sub_105,
      &node,
      sub_type_support,
      sub_topic_10,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_10);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_10);
    }

    rcl_subscription_t sub_106 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg106;
    rc = rcl_subscription_init(
      &sub_106,
      &node,
      sub_type_support,
      sub_topic_10,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_10);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_10);
    }

    rcl_subscription_t sub_107 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg107;
    rc = rcl_subscription_init(
      &sub_107,
      &node,
      sub_type_support,
      sub_topic_10,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_10);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_10);
    }

    rcl_subscription_t sub_108 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg108;
    rc = rcl_subscription_init(
      &sub_108,
      &node,
      sub_type_support,
      sub_topic_10,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_10);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_10);
    }

    rcl_subscription_t sub_109 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg109;
    rc = rcl_subscription_init(
      &sub_109,
      &node,
      sub_type_support,
      sub_topic_10,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_10);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_10);
    }

    rcl_subscription_t sub_110 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg110;
    rc = rcl_subscription_init(
      &sub_110,
      &node,
      sub_type_support,
      sub_topic_11,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_11);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_11);
    }

    rcl_subscription_t sub_111 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg111;
    rc = rcl_subscription_init(
      &sub_111,
      &node,
      sub_type_support,
      sub_topic_11,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_11);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_11);
    }

    rcl_subscription_t sub_112 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg112;
    rc = rcl_subscription_init(
      &sub_112,
      &node,
      sub_type_support,
      sub_topic_11,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_11);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_11);
    }

    rcl_subscription_t sub_113 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg113;
    rc = rcl_subscription_init(
      &sub_113,
      &node,
      sub_type_support,
      sub_topic_11,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_11);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_11);
    }

    rcl_subscription_t sub_114 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg114;
    rc = rcl_subscription_init(
      &sub_114,
      &node,
      sub_type_support,
      sub_topic_11,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_11);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_11);
    }

    rcl_subscription_t sub_115 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg115;
    rc = rcl_subscription_init(
      &sub_115,
      &node,
      sub_type_support,
      sub_topic_11,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_11);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_11);
    }

    rcl_subscription_t sub_116 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg116;
    rc = rcl_subscription_init(
      &sub_116,
      &node,
      sub_type_support,
      sub_topic_11,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_11);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_11);
    }

    rcl_subscription_t sub_117 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg117;
    rc = rcl_subscription_init(
      &sub_117,
      &node,
      sub_type_support,
      sub_topic_11,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_11);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_11);
    }

    rcl_subscription_t sub_118 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg118;
    rc = rcl_subscription_init(
      &sub_118,
      &node,
      sub_type_support,
      sub_topic_11,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_11);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_11);
    }

    rcl_subscription_t sub_119 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg119;
    rc = rcl_subscription_init(
      &sub_119,
      &node,
      sub_type_support,
      sub_topic_11,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_11);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_11);
    }

    rcl_subscription_t sub_120 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg120;
    rc = rcl_subscription_init(
      &sub_120,
      &node,
      sub_type_support,
      sub_topic_12,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_12);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_12);
    }

    rcl_subscription_t sub_121 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg121;
    rc = rcl_subscription_init(
      &sub_121,
      &node,
      sub_type_support,
      sub_topic_12,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_12);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_12);
    }

    rcl_subscription_t sub_122 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg122;
    rc = rcl_subscription_init(
      &sub_122,
      &node,
      sub_type_support,
      sub_topic_12,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_12);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_12);
    }

    rcl_subscription_t sub_123 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg123;
    rc = rcl_subscription_init(
      &sub_123,
      &node,
      sub_type_support,
      sub_topic_12,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_12);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_12);
    }

    rcl_subscription_t sub_124 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg124;
    rc = rcl_subscription_init(
      &sub_124,
      &node,
      sub_type_support,
      sub_topic_12,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_12);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_12);
    }

    rcl_subscription_t sub_125 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg125;
    rc = rcl_subscription_init(
      &sub_125,
      &node,
      sub_type_support,
      sub_topic_12,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_12);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_12);
    }

    rcl_subscription_t sub_126 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg126;
    rc = rcl_subscription_init(
      &sub_126,
      &node,
      sub_type_support,
      sub_topic_12,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_12);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_12);
    }

    rcl_subscription_t sub_127 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg127;
    rc = rcl_subscription_init(
      &sub_127,
      &node,
      sub_type_support,
      sub_topic_12,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_12);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_12);
    }

    rcl_subscription_t sub_128 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg128;
    rc = rcl_subscription_init(
      &sub_128,
      &node,
      sub_type_support,
      sub_topic_12,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_12);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_12);
    }

    rcl_subscription_t sub_129 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg129;
    rc = rcl_subscription_init(
      &sub_129,
      &node,
      sub_type_support,
      sub_topic_12,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_12);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_12);
    }

    rcl_subscription_t sub_130 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg130;
    rc = rcl_subscription_init(
      &sub_130,
      &node,
      sub_type_support,
      sub_topic_13,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_13);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_13);
    }

    rcl_subscription_t sub_131 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg131;
    rc = rcl_subscription_init(
      &sub_131,
      &node,
      sub_type_support,
      sub_topic_13,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_13);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_13);
    }

    rcl_subscription_t sub_132 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg132;
    rc = rcl_subscription_init(
      &sub_132,
      &node,
      sub_type_support,
      sub_topic_13,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_13);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_13);
    }

    rcl_subscription_t sub_133 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg133;
    rc = rcl_subscription_init(
      &sub_133,
      &node,
      sub_type_support,
      sub_topic_13,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_13);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_13);
    }

    rcl_subscription_t sub_134 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg134;
    rc = rcl_subscription_init(
      &sub_134,
      &node,
      sub_type_support,
      sub_topic_13,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_13);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_13);
    }

    rcl_subscription_t sub_135 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg135;
    rc = rcl_subscription_init(
      &sub_135,
      &node,
      sub_type_support,
      sub_topic_13,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_13);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_13);
    }

    rcl_subscription_t sub_136 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg136;
    rc = rcl_subscription_init(
      &sub_136,
      &node,
      sub_type_support,
      sub_topic_13,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_13);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_13);
    }

    rcl_subscription_t sub_137 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg137;
    rc = rcl_subscription_init(
      &sub_137,
      &node,
      sub_type_support,
      sub_topic_13,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_13);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_13);
    }

    rcl_subscription_t sub_138 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg138;
    rc = rcl_subscription_init(
      &sub_138,
      &node,
      sub_type_support,
      sub_topic_13,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_13);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_13);
    }

    rcl_subscription_t sub_139 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg139;
    rc = rcl_subscription_init(
      &sub_139,
      &node,
      sub_type_support,
      sub_topic_13,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_13);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_13);
    }

    rcl_subscription_t sub_140 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg140;
    rc = rcl_subscription_init(
      &sub_140,
      &node,
      sub_type_support,
      sub_topic_14,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_14);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_14);
    }

    rcl_subscription_t sub_141 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg141;
    rc = rcl_subscription_init(
      &sub_141,
      &node,
      sub_type_support,
      sub_topic_14,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_14);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_14);
    }

    rcl_subscription_t sub_142 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg142;
    rc = rcl_subscription_init(
      &sub_142,
      &node,
      sub_type_support,
      sub_topic_14,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_14);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_14);
    }

    rcl_subscription_t sub_143 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg143;
    rc = rcl_subscription_init(
      &sub_143,
      &node,
      sub_type_support,
      sub_topic_14,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_14);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_14);
    }

    rcl_subscription_t sub_144 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg144;
    rc = rcl_subscription_init(
      &sub_144,
      &node,
      sub_type_support,
      sub_topic_14,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_14);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_14);
    }

    rcl_subscription_t sub_145 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg145;
    rc = rcl_subscription_init(
      &sub_145,
      &node,
      sub_type_support,
      sub_topic_14,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_14);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_14);
    }

    rcl_subscription_t sub_146 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg146;
    rc = rcl_subscription_init(
      &sub_146,
      &node,
      sub_type_support,
      sub_topic_14,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_14);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_14);
    }

    rcl_subscription_t sub_147 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg147;
    rc = rcl_subscription_init(
      &sub_147,
      &node,
      sub_type_support,
      sub_topic_14,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_14);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_14);
    }

    rcl_subscription_t sub_148 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg148;
    rc = rcl_subscription_init(
      &sub_148,
      &node,
      sub_type_support,
      sub_topic_14,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_14);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_14);
    }

    rcl_subscription_t sub_149 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg149;
    rc = rcl_subscription_init(
      &sub_149,
      &node,
      sub_type_support,
      sub_topic_14,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_14);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_14);
    }

    rcl_subscription_t sub_150 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg150;
    rc = rcl_subscription_init(
      &sub_150,
      &node,
      sub_type_support,
      sub_topic_15,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_15);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_15);
    }

    rcl_subscription_t sub_151 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg151;
    rc = rcl_subscription_init(
      &sub_151,
      &node,
      sub_type_support,
      sub_topic_15,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_15);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_15);
    }

    rcl_subscription_t sub_152 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg152;
    rc = rcl_subscription_init(
      &sub_152,
      &node,
      sub_type_support,
      sub_topic_15,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_15);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_15);
    }

    rcl_subscription_t sub_153 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg153;
    rc = rcl_subscription_init(
      &sub_153,
      &node,
      sub_type_support,
      sub_topic_15,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_15);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_15);
    }

    rcl_subscription_t sub_154 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg154;
    rc = rcl_subscription_init(
      &sub_154,
      &node,
      sub_type_support,
      sub_topic_15,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_15);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_15);
    }

    rcl_subscription_t sub_155 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg155;
    rc = rcl_subscription_init(
      &sub_155,
      &node,
      sub_type_support,
      sub_topic_15,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_15);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_15);
    }

    rcl_subscription_t sub_156 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg156;
    rc = rcl_subscription_init(
      &sub_156,
      &node,
      sub_type_support,
      sub_topic_15,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_15);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_15);
    }

    rcl_subscription_t sub_157 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg157;
    rc = rcl_subscription_init(
      &sub_157,
      &node,
      sub_type_support,
      sub_topic_15,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_15);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_15);
    }

    rcl_subscription_t sub_158 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg158;
    rc = rcl_subscription_init(
      &sub_158,
      &node,
      sub_type_support,
      sub_topic_15,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_15);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_15);
    }

    rcl_subscription_t sub_159 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg159;
    rc = rcl_subscription_init(
      &sub_159,
      &node,
      sub_type_support,
      sub_topic_15,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_15);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_15);
    }

    rcl_subscription_t sub_160 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg160;
    rc = rcl_subscription_init(
      &sub_160,
      &node,
      sub_type_support,
      sub_topic_16,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_16);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_16);
    }

    rcl_subscription_t sub_161 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg161;
    rc = rcl_subscription_init(
      &sub_161,
      &node,
      sub_type_support,
      sub_topic_16,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_16);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_16);
    }

    rcl_subscription_t sub_162 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg162;
    rc = rcl_subscription_init(
      &sub_162,
      &node,
      sub_type_support,
      sub_topic_16,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_16);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_16);
    }

    rcl_subscription_t sub_163 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg163;
    rc = rcl_subscription_init(
      &sub_163,
      &node,
      sub_type_support,
      sub_topic_16,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_16);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_16);
    }

    rcl_subscription_t sub_164 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg164;
    rc = rcl_subscription_init(
      &sub_164,
      &node,
      sub_type_support,
      sub_topic_16,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_16);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_16);
    }

    rcl_subscription_t sub_165 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg165;
    rc = rcl_subscription_init(
      &sub_165,
      &node,
      sub_type_support,
      sub_topic_16,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_16);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_16);
    }

    rcl_subscription_t sub_166 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg166;
    rc = rcl_subscription_init(
      &sub_166,
      &node,
      sub_type_support,
      sub_topic_16,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_16);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_16);
    }

    rcl_subscription_t sub_167 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg167;
    rc = rcl_subscription_init(
      &sub_167,
      &node,
      sub_type_support,
      sub_topic_16,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_16);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_16);
    }

    rcl_subscription_t sub_168 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg168;
    rc = rcl_subscription_init(
      &sub_168,
      &node,
      sub_type_support,
      sub_topic_16,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_16);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_16);
    }

    rcl_subscription_t sub_169 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg169;
    rc = rcl_subscription_init(
      &sub_169,
      &node,
      sub_type_support,
      sub_topic_16,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_16);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_16);
    }

    rcl_subscription_t sub_170 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg170;
    rc = rcl_subscription_init(
      &sub_170,
      &node,
      sub_type_support,
      sub_topic_17,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_17);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_17);
    }

    rcl_subscription_t sub_171 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg171;
    rc = rcl_subscription_init(
      &sub_171,
      &node,
      sub_type_support,
      sub_topic_17,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_17);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_17);
    }

    rcl_subscription_t sub_172 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg172;
    rc = rcl_subscription_init(
      &sub_172,
      &node,
      sub_type_support,
      sub_topic_17,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_17);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_17);
    }

    rcl_subscription_t sub_173 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg173;
    rc = rcl_subscription_init(
      &sub_173,
      &node,
      sub_type_support,
      sub_topic_17,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_17);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_17);
    }

    rcl_subscription_t sub_174 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg174;
    rc = rcl_subscription_init(
      &sub_174,
      &node,
      sub_type_support,
      sub_topic_17,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_17);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_17);
    }

    rcl_subscription_t sub_175 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg175;
    rc = rcl_subscription_init(
      &sub_175,
      &node,
      sub_type_support,
      sub_topic_17,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_17);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_17);
    }

    rcl_subscription_t sub_176 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg176;
    rc = rcl_subscription_init(
      &sub_176,
      &node,
      sub_type_support,
      sub_topic_17,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_17);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_17);
    }

    rcl_subscription_t sub_177 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg177;
    rc = rcl_subscription_init(
      &sub_177,
      &node,
      sub_type_support,
      sub_topic_17,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_17);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_17);
    }

    rcl_subscription_t sub_178 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg178;
    rc = rcl_subscription_init(
      &sub_178,
      &node,
      sub_type_support,
      sub_topic_17,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_17);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_17);
    }

    rcl_subscription_t sub_179 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg179;
    rc = rcl_subscription_init(
      &sub_179,
      &node,
      sub_type_support,
      sub_topic_17,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_17);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_17);
    }

    rcl_subscription_t sub_180 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg180;
    rc = rcl_subscription_init(
      &sub_180,
      &node,
      sub_type_support,
      sub_topic_18,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_18);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_18);
    }

    rcl_subscription_t sub_181 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg181;
    rc = rcl_subscription_init(
      &sub_181,
      &node,
      sub_type_support,
      sub_topic_18,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_18);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_18);
    }

    rcl_subscription_t sub_182 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg182;
    rc = rcl_subscription_init(
      &sub_182,
      &node,
      sub_type_support,
      sub_topic_18,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_18);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_18);
    }

    rcl_subscription_t sub_183 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg183;
    rc = rcl_subscription_init(
      &sub_183,
      &node,
      sub_type_support,
      sub_topic_18,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_18);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_18);
    }

    rcl_subscription_t sub_184 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg184;
    rc = rcl_subscription_init(
      &sub_184,
      &node,
      sub_type_support,
      sub_topic_18,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_18);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_18);
    }

    rcl_subscription_t sub_185 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg185;
    rc = rcl_subscription_init(
      &sub_185,
      &node,
      sub_type_support,
      sub_topic_18,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_18);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_18);
    }

    rcl_subscription_t sub_186 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg186;
    rc = rcl_subscription_init(
      &sub_186,
      &node,
      sub_type_support,
      sub_topic_18,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_18);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_18);
    }

    rcl_subscription_t sub_187 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg187;
    rc = rcl_subscription_init(
      &sub_187,
      &node,
      sub_type_support,
      sub_topic_18,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_18);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_18);
    }

    rcl_subscription_t sub_188 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg188;
    rc = rcl_subscription_init(
      &sub_188,
      &node,
      sub_type_support,
      sub_topic_18,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_18);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_18);
    }

    rcl_subscription_t sub_189 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg189;
    rc = rcl_subscription_init(
      &sub_189,
      &node,
      sub_type_support,
      sub_topic_18,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_18);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_18);
    }

    rcl_subscription_t sub_190 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg190;
    rc = rcl_subscription_init(
      &sub_190,
      &node,
      sub_type_support,
      sub_topic_19,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_19);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_19);
    }

    rcl_subscription_t sub_191 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg191;
    rc = rcl_subscription_init(
      &sub_191,
      &node,
      sub_type_support,
      sub_topic_19,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_19);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_19);
    }

    rcl_subscription_t sub_192 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg192;
    rc = rcl_subscription_init(
      &sub_192,
      &node,
      sub_type_support,
      sub_topic_19,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_19);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_19);
    }

    rcl_subscription_t sub_193 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg193;
    rc = rcl_subscription_init(
      &sub_193,
      &node,
      sub_type_support,
      sub_topic_19,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_19);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_19);
    }

    rcl_subscription_t sub_194 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg194;
    rc = rcl_subscription_init(
      &sub_194,
      &node,
      sub_type_support,
      sub_topic_19,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_19);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_19);
    }

    rcl_subscription_t sub_195 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg195;
    rc = rcl_subscription_init(
      &sub_195,
      &node,
      sub_type_support,
      sub_topic_19,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_19);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_19);
    }

    rcl_subscription_t sub_196 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg196;
    rc = rcl_subscription_init(
      &sub_196,
      &node,
      sub_type_support,
      sub_topic_19,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_19);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_19);
    }

    rcl_subscription_t sub_197 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg197;
    rc = rcl_subscription_init(
      &sub_197,
      &node,
      sub_type_support,
      sub_topic_19,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_19);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_19);
    }

    rcl_subscription_t sub_198 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg198;
    rc = rcl_subscription_init(
      &sub_198,
      &node,
      sub_type_support,
      sub_topic_19,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_19);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_19);
    }

    rcl_subscription_t sub_199 = rcl_get_zero_initialized_subscription();
    std_msgs__msg__String sub_msg199;
    rc = rcl_subscription_init(
      &sub_199,
      &node,
      sub_type_support,
      sub_topic_19,
      &subscription_ops);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_subscription, rcl_subscription_init);
      printf("Failed to create subscriber: %s.\n", sub_topic_19);
      return -1;
    }
    else {
      printf("Created subscriber %s:\n", sub_topic_19);
    }

    // create pub topics (could be combined with sub topics, oh well)
    const char * pub_topic_0 = "topic_0";
    const char * pub_topic_1 = "topic_1";
    const char * pub_topic_2 = "topic_2";
    const char * pub_topic_3 = "topic_3";
    const char * pub_topic_4 = "topic_4";
    const char * pub_topic_5 = "topic_5";
    const char * pub_topic_6 = "topic_6";
    const char * pub_topic_7 = "topic_7";
    const char * pub_topic_8 = "topic_8";
    const char * pub_topic_9 = "topic_9";
    const char * pub_topic_10 = "topic_10";
    const char * pub_topic_11 = "topic_11";
    const char * pub_topic_12 = "topic_12";
    const char * pub_topic_13 = "topic_13";
    const char * pub_topic_14 = "topic_14";
    const char * pub_topic_15 = "topic_15";
    const char * pub_topic_16 = "topic_16";
    const char * pub_topic_17 = "topic_17";
    const char * pub_topic_18 = "topic_18";
    const char * pub_topic_19 = "topic_19";

    // default message for all publishers
    std_msgs__msg__String__init(&pub_msg);  // init
    rosidl_generator_c__String__assignn(&pub_msg, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 68); // mem allocation TODO: check if this is the way to do this (it works though)

    // default publisher options + type support
    const rosidl_message_type_support_t * pub_type_support = ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs,
        msg,
        String);
    rcl_publisher_options_t pub_opt = rcl_publisher_get_default_options();

    // create publishers
    pub_0        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_0,
        &node,
        pub_type_support,
        pub_topic_0,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_0);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_0);
    }

    pub_1        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_1,
        &node,
        pub_type_support,
        pub_topic_1,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_1);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_1);
    }

    pub_2        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_2,
        &node,
        pub_type_support,
        pub_topic_2,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_2);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_2);
    }

    pub_3        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_3,
        &node,
        pub_type_support,
        pub_topic_3,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_3);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_3);
    }

    pub_4        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_4,
        &node,
        pub_type_support,
        pub_topic_4,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_4);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_4);
    }

    pub_5        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_5,
        &node,
        pub_type_support,
        pub_topic_5,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_5);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_5);
    }

    pub_6        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_6,
        &node,
        pub_type_support,
        pub_topic_6,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_6);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_6);
    }

    pub_7        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_7,
        &node,
        pub_type_support,
        pub_topic_7,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_7);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_7);
    }

    pub_8        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_8,
        &node,
        pub_type_support,
        pub_topic_8,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_8);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_8);
    }

    pub_9        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_9,
        &node,
        pub_type_support,
        pub_topic_9,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_9);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_9);
    }

    pub_10        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_10,
        &node,
        pub_type_support,
        pub_topic_10,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_10);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_10);
    }

    pub_11        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_11,
        &node,
        pub_type_support,
        pub_topic_11,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_11);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_11);
    }

    pub_12        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_12,
        &node,
        pub_type_support,
        pub_topic_12,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_12);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_12);
    }

    pub_13        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_13,
        &node,
        pub_type_support,
        pub_topic_13,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_13);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_13);
    }

    pub_14        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_14,
        &node,
        pub_type_support,
        pub_topic_14,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_14);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_14);
    }

    pub_15        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_15,
        &node,
        pub_type_support,
        pub_topic_15,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_15);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_15);
    }

    pub_16        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_16,
        &node,
        pub_type_support,
        pub_topic_16,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_16);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_16);
    }

    pub_17        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_17,
        &node,
        pub_type_support,
        pub_topic_17,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_17);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_17);
    }

    pub_18        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_18,
        &node,
        pub_type_support,
        pub_topic_18,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_18);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_18);
    }

    pub_19        = rcl_get_zero_initialized_publisher();
    rc = rcl_publisher_init(
        &pub_19,
        &node,
        pub_type_support,
        pub_topic_19,
        &pub_opt);

    if (rc != RCL_RET_OK) {
        PRINT_RCL_ERROR(create_publisher, rcl_publisher_init);
        printf("Failed to create publisher: %s.\n", pub_topic_19);
        return -1;
    } else {
        printf("Created publisher: %s\n", pub_topic_19);
    }

    // create timeout and clock for all timers
    const unsigned int timer_timeout = 20;
    rcl_clock_t clock;
    rcl_allocator_t allocator = rcl_get_default_allocator();
    rc = rcl_clock_init(RCL_STEADY_TIME, &clock, &allocator);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_timer, rcl_clock_init);
      return -1;
    }

    // create timers
    rcl_timer_t timer0 = rcl_get_zero_initialized_timer();
    rc = rcl_timer_init(&timer0, &clock, &context, RCL_MS_TO_NS(timer_timeout),
        timer_0_callback, allocator);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_timer, rcl_timer_init);
      return -1;
    } else {
      printf("Created timer0 with timeout %d ms.\n", timer_timeout);
    }

    rcl_timer_t timer1 = rcl_get_zero_initialized_timer();
    rc = rcl_timer_init(&timer1, &clock, &context, RCL_MS_TO_NS(timer_timeout),
        timer_1_callback, allocator);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_timer, rcl_timer_init);
      return -1;
    } else {
      printf("Created timer1 with timeout %d ms.\n", timer_timeout);
    }

    rcl_timer_t timer2 = rcl_get_zero_initialized_timer();
    rc = rcl_timer_init(&timer2, &clock, &context, RCL_MS_TO_NS(timer_timeout),
        timer_2_callback, allocator);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_timer, rcl_timer_init);
      return -1;
    } else {
      printf("Created timer2 with timeout %d ms.\n", timer_timeout);
    }

    rcl_timer_t timer3 = rcl_get_zero_initialized_timer();
    rc = rcl_timer_init(&timer3, &clock, &context, RCL_MS_TO_NS(timer_timeout),
        timer_3_callback, allocator);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_timer, rcl_timer_init);
      return -1;
    } else {
      printf("Created timer3 with timeout %d ms.\n", timer_timeout);
    }

    rcl_timer_t timer4 = rcl_get_zero_initialized_timer();
    rc = rcl_timer_init(&timer4, &clock, &context, RCL_MS_TO_NS(timer_timeout),
        timer_4_callback, allocator);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_timer, rcl_timer_init);
      return -1;
    } else {
      printf("Created timer4 with timeout %d ms.\n", timer_timeout);
    }

    rcl_timer_t timer5 = rcl_get_zero_initialized_timer();
    rc = rcl_timer_init(&timer5, &clock, &context, RCL_MS_TO_NS(timer_timeout),
        timer_5_callback, allocator);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_timer, rcl_timer_init);
      return -1;
    } else {
      printf("Created timer5 with timeout %d ms.\n", timer_timeout);
    }

    rcl_timer_t timer6 = rcl_get_zero_initialized_timer();
    rc = rcl_timer_init(&timer6, &clock, &context, RCL_MS_TO_NS(timer_timeout),
        timer_6_callback, allocator);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_timer, rcl_timer_init);
      return -1;
    } else {
      printf("Created timer6 with timeout %d ms.\n", timer_timeout);
    }

    rcl_timer_t timer7 = rcl_get_zero_initialized_timer();
    rc = rcl_timer_init(&timer7, &clock, &context, RCL_MS_TO_NS(timer_timeout),
        timer_7_callback, allocator);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_timer, rcl_timer_init);
      return -1;
    } else {
      printf("Created timer7 with timeout %d ms.\n", timer_timeout);
    }

    rcl_timer_t timer8 = rcl_get_zero_initialized_timer();
    rc = rcl_timer_init(&timer8, &clock, &context, RCL_MS_TO_NS(timer_timeout),
        timer_8_callback, allocator);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_timer, rcl_timer_init);
      return -1;
    } else {
      printf("Created timer8 with timeout %d ms.\n", timer_timeout);
    }

    rcl_timer_t timer9 = rcl_get_zero_initialized_timer();
    rc = rcl_timer_init(&timer9, &clock, &context, RCL_MS_TO_NS(timer_timeout),
        timer_9_callback, allocator);
    if (rc != RCL_RET_OK) {
      PRINT_RCL_ERROR(create_timer, rcl_timer_init);
      return -1;
    } else {
      printf("Created timer9 with timeout %d ms.\n", timer_timeout);
    }

    // create executor
    rcle_let_executor_t exe;
    rcle_let_executor_init(&exe, &context, 250, &allocator);

    // Add subscriptions to executor
    rc = rcle_let_executor_add_subscription(&exe, &sub_00, &sub_msg00, &sub_00_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_01, &sub_msg01, &sub_01_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_02, &sub_msg02, &sub_02_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_03, &sub_msg03, &sub_03_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_04, &sub_msg04, &sub_04_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_05, &sub_msg05, &sub_05_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_06, &sub_msg06, &sub_06_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_07, &sub_msg07, &sub_07_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_08, &sub_msg08, &sub_08_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_09, &sub_msg09, &sub_09_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_10, &sub_msg10, &sub_10_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_11, &sub_msg11, &sub_11_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_12, &sub_msg12, &sub_12_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_13, &sub_msg13, &sub_13_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_14, &sub_msg14, &sub_14_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_15, &sub_msg15, &sub_15_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_16, &sub_msg16, &sub_16_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_17, &sub_msg17, &sub_17_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_18, &sub_msg18, &sub_18_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_19, &sub_msg19, &sub_19_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_20, &sub_msg20, &sub_20_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_21, &sub_msg21, &sub_21_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_22, &sub_msg22, &sub_22_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_23, &sub_msg23, &sub_23_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_24, &sub_msg24, &sub_24_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_25, &sub_msg25, &sub_25_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_26, &sub_msg26, &sub_26_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_27, &sub_msg27, &sub_27_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_28, &sub_msg28, &sub_28_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_29, &sub_msg29, &sub_29_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_30, &sub_msg30, &sub_30_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_31, &sub_msg31, &sub_31_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_32, &sub_msg32, &sub_32_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_33, &sub_msg33, &sub_33_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_34, &sub_msg34, &sub_34_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_35, &sub_msg35, &sub_35_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_36, &sub_msg36, &sub_36_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_37, &sub_msg37, &sub_37_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_38, &sub_msg38, &sub_38_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_39, &sub_msg39, &sub_39_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_40, &sub_msg40, &sub_40_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_41, &sub_msg41, &sub_41_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_42, &sub_msg42, &sub_42_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_43, &sub_msg43, &sub_43_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_44, &sub_msg44, &sub_44_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_45, &sub_msg45, &sub_45_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_46, &sub_msg46, &sub_46_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_47, &sub_msg47, &sub_47_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_48, &sub_msg48, &sub_48_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_49, &sub_msg49, &sub_49_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_50, &sub_msg50, &sub_50_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_51, &sub_msg51, &sub_51_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_52, &sub_msg52, &sub_52_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_53, &sub_msg53, &sub_53_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_54, &sub_msg54, &sub_54_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_55, &sub_msg55, &sub_55_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_56, &sub_msg56, &sub_56_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_57, &sub_msg57, &sub_57_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_58, &sub_msg58, &sub_58_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_59, &sub_msg59, &sub_59_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_60, &sub_msg60, &sub_60_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_61, &sub_msg61, &sub_61_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_62, &sub_msg62, &sub_62_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_63, &sub_msg63, &sub_63_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_64, &sub_msg64, &sub_64_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_65, &sub_msg65, &sub_65_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_66, &sub_msg66, &sub_66_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_67, &sub_msg67, &sub_67_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_68, &sub_msg68, &sub_68_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_69, &sub_msg69, &sub_69_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_70, &sub_msg70, &sub_70_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_71, &sub_msg71, &sub_71_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_72, &sub_msg72, &sub_72_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_73, &sub_msg73, &sub_73_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_74, &sub_msg74, &sub_74_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_75, &sub_msg75, &sub_75_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_76, &sub_msg76, &sub_76_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_77, &sub_msg77, &sub_77_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_78, &sub_msg78, &sub_78_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_79, &sub_msg79, &sub_79_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_80, &sub_msg80, &sub_80_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_81, &sub_msg81, &sub_81_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_82, &sub_msg82, &sub_82_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_83, &sub_msg83, &sub_83_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_84, &sub_msg84, &sub_84_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_85, &sub_msg85, &sub_85_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_86, &sub_msg86, &sub_86_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_87, &sub_msg87, &sub_87_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_88, &sub_msg88, &sub_88_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_89, &sub_msg89, &sub_89_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_90, &sub_msg90, &sub_90_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_91, &sub_msg91, &sub_91_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_92, &sub_msg92, &sub_92_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_93, &sub_msg93, &sub_93_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_94, &sub_msg94, &sub_94_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_95, &sub_msg95, &sub_95_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_96, &sub_msg96, &sub_96_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_97, &sub_msg97, &sub_97_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_98, &sub_msg98, &sub_98_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_99, &sub_msg99, &sub_99_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_100, &sub_msg100, &sub_100_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_101, &sub_msg101, &sub_101_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_102, &sub_msg102, &sub_102_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_103, &sub_msg103, &sub_103_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_104, &sub_msg104, &sub_104_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_105, &sub_msg105, &sub_105_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_106, &sub_msg106, &sub_106_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_107, &sub_msg107, &sub_107_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_108, &sub_msg108, &sub_108_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_109, &sub_msg109, &sub_109_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_110, &sub_msg110, &sub_110_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_111, &sub_msg111, &sub_111_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_112, &sub_msg112, &sub_112_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_113, &sub_msg113, &sub_113_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_114, &sub_msg114, &sub_114_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_115, &sub_msg115, &sub_115_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_116, &sub_msg116, &sub_116_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_117, &sub_msg117, &sub_117_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_118, &sub_msg118, &sub_118_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_119, &sub_msg119, &sub_119_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_120, &sub_msg120, &sub_120_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_121, &sub_msg121, &sub_121_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_122, &sub_msg122, &sub_122_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_123, &sub_msg123, &sub_123_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_124, &sub_msg124, &sub_124_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_125, &sub_msg125, &sub_125_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_126, &sub_msg126, &sub_126_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_127, &sub_msg127, &sub_127_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_128, &sub_msg128, &sub_128_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_129, &sub_msg129, &sub_129_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_130, &sub_msg130, &sub_130_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_131, &sub_msg131, &sub_131_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_132, &sub_msg132, &sub_132_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_133, &sub_msg133, &sub_133_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_134, &sub_msg134, &sub_134_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_135, &sub_msg135, &sub_135_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_136, &sub_msg136, &sub_136_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_137, &sub_msg137, &sub_137_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_138, &sub_msg138, &sub_138_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_139, &sub_msg139, &sub_139_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_140, &sub_msg140, &sub_140_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_141, &sub_msg141, &sub_141_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_142, &sub_msg142, &sub_142_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_143, &sub_msg143, &sub_143_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_144, &sub_msg144, &sub_144_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_145, &sub_msg145, &sub_145_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_146, &sub_msg146, &sub_146_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_147, &sub_msg147, &sub_147_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_148, &sub_msg148, &sub_148_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_149, &sub_msg149, &sub_149_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_150, &sub_msg150, &sub_150_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_151, &sub_msg151, &sub_151_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_152, &sub_msg152, &sub_152_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_153, &sub_msg153, &sub_153_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_154, &sub_msg154, &sub_154_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_155, &sub_msg155, &sub_155_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_156, &sub_msg156, &sub_156_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_157, &sub_msg157, &sub_157_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_158, &sub_msg158, &sub_158_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_159, &sub_msg159, &sub_159_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_160, &sub_msg160, &sub_160_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_161, &sub_msg161, &sub_161_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_162, &sub_msg162, &sub_162_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_163, &sub_msg163, &sub_163_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_164, &sub_msg164, &sub_164_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_165, &sub_msg165, &sub_165_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_166, &sub_msg166, &sub_166_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_167, &sub_msg167, &sub_167_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_168, &sub_msg168, &sub_168_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_169, &sub_msg169, &sub_169_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_170, &sub_msg170, &sub_170_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_171, &sub_msg171, &sub_171_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_172, &sub_msg172, &sub_172_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_173, &sub_msg173, &sub_173_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_174, &sub_msg174, &sub_174_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_175, &sub_msg175, &sub_175_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_176, &sub_msg176, &sub_176_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_177, &sub_msg177, &sub_177_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_178, &sub_msg178, &sub_178_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_179, &sub_msg179, &sub_179_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_180, &sub_msg180, &sub_180_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_181, &sub_msg181, &sub_181_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_182, &sub_msg182, &sub_182_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_183, &sub_msg183, &sub_183_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_184, &sub_msg184, &sub_184_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_185, &sub_msg185, &sub_185_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_186, &sub_msg186, &sub_186_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_187, &sub_msg187, &sub_187_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_188, &sub_msg188, &sub_188_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_189, &sub_msg189, &sub_189_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_190, &sub_msg190, &sub_190_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_191, &sub_msg191, &sub_191_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_192, &sub_msg192, &sub_192_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_193, &sub_msg193, &sub_193_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_194, &sub_msg194, &sub_194_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_195, &sub_msg195, &sub_195_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_196, &sub_msg196, &sub_196_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_197, &sub_msg197, &sub_197_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_198, &sub_msg198, &sub_198_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}
    rc = rcle_let_executor_add_subscription(&exe, &sub_199, &sub_msg199, &sub_199_callback,
          ON_NEW_DATA);
      if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_subscription);}


    // add timers to executor
    rcle_let_executor_add_timer(&exe, &timer0);
    if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_timer);}
    rcle_let_executor_add_timer(&exe, &timer1);
    if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_timer);}
    rcle_let_executor_add_timer(&exe, &timer2);
    if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_timer);}
    rcle_let_executor_add_timer(&exe, &timer3);
    if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_timer);}
    rcle_let_executor_add_timer(&exe, &timer4);
    if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_timer);}
    rcle_let_executor_add_timer(&exe, &timer5);
    if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_timer);}
    rcle_let_executor_add_timer(&exe, &timer6);
    if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_timer);}
    rcle_let_executor_add_timer(&exe, &timer7);
    if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_timer);}
    rcle_let_executor_add_timer(&exe, &timer8);
    if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_timer);}
    rcle_let_executor_add_timer(&exe, &timer9);
    if (rc != RCL_RET_OK) {PRINT_RCL_ERROR(rcle_executor, add_timer);}

    // spin executor
    rcle_let_executor_spin(&exe);

    // clean up and free memory
    rcle_let_executor_fini(&exe);
    rc = rcl_subscription_fini(&sub_00, &node);
    rc = rcl_subscription_fini(&sub_01, &node);
    rc = rcl_subscription_fini(&sub_02, &node);
    rc = rcl_subscription_fini(&sub_03, &node);
    rc = rcl_subscription_fini(&sub_04, &node);
    rc = rcl_subscription_fini(&sub_05, &node);
    rc = rcl_subscription_fini(&sub_06, &node);
    rc = rcl_subscription_fini(&sub_07, &node);
    rc = rcl_subscription_fini(&sub_08, &node);
    rc = rcl_subscription_fini(&sub_09, &node);
    rc = rcl_subscription_fini(&sub_10, &node);
    rc = rcl_subscription_fini(&sub_11, &node);
    rc = rcl_subscription_fini(&sub_12, &node);
    rc = rcl_subscription_fini(&sub_13, &node);
    rc = rcl_subscription_fini(&sub_14, &node);
    rc = rcl_subscription_fini(&sub_15, &node);
    rc = rcl_subscription_fini(&sub_16, &node);
    rc = rcl_subscription_fini(&sub_17, &node);
    rc = rcl_subscription_fini(&sub_18, &node);
    rc = rcl_subscription_fini(&sub_19, &node);
    rc = rcl_subscription_fini(&sub_20, &node);
    rc = rcl_subscription_fini(&sub_21, &node);
    rc = rcl_subscription_fini(&sub_22, &node);
    rc = rcl_subscription_fini(&sub_23, &node);
    rc = rcl_subscription_fini(&sub_24, &node);
    rc = rcl_subscription_fini(&sub_25, &node);
    rc = rcl_subscription_fini(&sub_26, &node);
    rc = rcl_subscription_fini(&sub_27, &node);
    rc = rcl_subscription_fini(&sub_28, &node);
    rc = rcl_subscription_fini(&sub_29, &node);
    rc = rcl_subscription_fini(&sub_30, &node);
    rc = rcl_subscription_fini(&sub_31, &node);
    rc = rcl_subscription_fini(&sub_32, &node);
    rc = rcl_subscription_fini(&sub_33, &node);
    rc = rcl_subscription_fini(&sub_34, &node);
    rc = rcl_subscription_fini(&sub_35, &node);
    rc = rcl_subscription_fini(&sub_36, &node);
    rc = rcl_subscription_fini(&sub_37, &node);
    rc = rcl_subscription_fini(&sub_38, &node);
    rc = rcl_subscription_fini(&sub_39, &node);
    rc = rcl_subscription_fini(&sub_40, &node);
    rc = rcl_subscription_fini(&sub_41, &node);
    rc = rcl_subscription_fini(&sub_42, &node);
    rc = rcl_subscription_fini(&sub_43, &node);
    rc = rcl_subscription_fini(&sub_44, &node);
    rc = rcl_subscription_fini(&sub_45, &node);
    rc = rcl_subscription_fini(&sub_46, &node);
    rc = rcl_subscription_fini(&sub_47, &node);
    rc = rcl_subscription_fini(&sub_48, &node);
    rc = rcl_subscription_fini(&sub_49, &node);
    rc = rcl_subscription_fini(&sub_50, &node);
    rc = rcl_subscription_fini(&sub_51, &node);
    rc = rcl_subscription_fini(&sub_52, &node);
    rc = rcl_subscription_fini(&sub_53, &node);
    rc = rcl_subscription_fini(&sub_54, &node);
    rc = rcl_subscription_fini(&sub_55, &node);
    rc = rcl_subscription_fini(&sub_56, &node);
    rc = rcl_subscription_fini(&sub_57, &node);
    rc = rcl_subscription_fini(&sub_58, &node);
    rc = rcl_subscription_fini(&sub_59, &node);
    rc = rcl_subscription_fini(&sub_60, &node);
    rc = rcl_subscription_fini(&sub_61, &node);
    rc = rcl_subscription_fini(&sub_62, &node);
    rc = rcl_subscription_fini(&sub_63, &node);
    rc = rcl_subscription_fini(&sub_64, &node);
    rc = rcl_subscription_fini(&sub_65, &node);
    rc = rcl_subscription_fini(&sub_66, &node);
    rc = rcl_subscription_fini(&sub_67, &node);
    rc = rcl_subscription_fini(&sub_68, &node);
    rc = rcl_subscription_fini(&sub_69, &node);
    rc = rcl_subscription_fini(&sub_70, &node);
    rc = rcl_subscription_fini(&sub_71, &node);
    rc = rcl_subscription_fini(&sub_72, &node);
    rc = rcl_subscription_fini(&sub_73, &node);
    rc = rcl_subscription_fini(&sub_74, &node);
    rc = rcl_subscription_fini(&sub_75, &node);
    rc = rcl_subscription_fini(&sub_76, &node);
    rc = rcl_subscription_fini(&sub_77, &node);
    rc = rcl_subscription_fini(&sub_78, &node);
    rc = rcl_subscription_fini(&sub_79, &node);
    rc = rcl_subscription_fini(&sub_80, &node);
    rc = rcl_subscription_fini(&sub_81, &node);
    rc = rcl_subscription_fini(&sub_82, &node);
    rc = rcl_subscription_fini(&sub_83, &node);
    rc = rcl_subscription_fini(&sub_84, &node);
    rc = rcl_subscription_fini(&sub_85, &node);
    rc = rcl_subscription_fini(&sub_86, &node);
    rc = rcl_subscription_fini(&sub_87, &node);
    rc = rcl_subscription_fini(&sub_88, &node);
    rc = rcl_subscription_fini(&sub_89, &node);
    rc = rcl_subscription_fini(&sub_90, &node);
    rc = rcl_subscription_fini(&sub_91, &node);
    rc = rcl_subscription_fini(&sub_92, &node);
    rc = rcl_subscription_fini(&sub_93, &node);
    rc = rcl_subscription_fini(&sub_94, &node);
    rc = rcl_subscription_fini(&sub_95, &node);
    rc = rcl_subscription_fini(&sub_96, &node);
    rc = rcl_subscription_fini(&sub_97, &node);
    rc = rcl_subscription_fini(&sub_98, &node);
    rc = rcl_subscription_fini(&sub_99, &node);
    rc = rcl_subscription_fini(&sub_100, &node);
    rc = rcl_subscription_fini(&sub_101, &node);
    rc = rcl_subscription_fini(&sub_102, &node);
    rc = rcl_subscription_fini(&sub_103, &node);
    rc = rcl_subscription_fini(&sub_104, &node);
    rc = rcl_subscription_fini(&sub_105, &node);
    rc = rcl_subscription_fini(&sub_106, &node);
    rc = rcl_subscription_fini(&sub_107, &node);
    rc = rcl_subscription_fini(&sub_108, &node);
    rc = rcl_subscription_fini(&sub_109, &node);
    rc = rcl_subscription_fini(&sub_110, &node);
    rc = rcl_subscription_fini(&sub_111, &node);
    rc = rcl_subscription_fini(&sub_112, &node);
    rc = rcl_subscription_fini(&sub_113, &node);
    rc = rcl_subscription_fini(&sub_114, &node);
    rc = rcl_subscription_fini(&sub_115, &node);
    rc = rcl_subscription_fini(&sub_116, &node);
    rc = rcl_subscription_fini(&sub_117, &node);
    rc = rcl_subscription_fini(&sub_118, &node);
    rc = rcl_subscription_fini(&sub_119, &node);
    rc = rcl_subscription_fini(&sub_120, &node);
    rc = rcl_subscription_fini(&sub_121, &node);
    rc = rcl_subscription_fini(&sub_122, &node);
    rc = rcl_subscription_fini(&sub_123, &node);
    rc = rcl_subscription_fini(&sub_124, &node);
    rc = rcl_subscription_fini(&sub_125, &node);
    rc = rcl_subscription_fini(&sub_126, &node);
    rc = rcl_subscription_fini(&sub_127, &node);
    rc = rcl_subscription_fini(&sub_128, &node);
    rc = rcl_subscription_fini(&sub_129, &node);
    rc = rcl_subscription_fini(&sub_130, &node);
    rc = rcl_subscription_fini(&sub_131, &node);
    rc = rcl_subscription_fini(&sub_132, &node);
    rc = rcl_subscription_fini(&sub_133, &node);
    rc = rcl_subscription_fini(&sub_134, &node);
    rc = rcl_subscription_fini(&sub_135, &node);
    rc = rcl_subscription_fini(&sub_136, &node);
    rc = rcl_subscription_fini(&sub_137, &node);
    rc = rcl_subscription_fini(&sub_138, &node);
    rc = rcl_subscription_fini(&sub_139, &node);
    rc = rcl_subscription_fini(&sub_140, &node);
    rc = rcl_subscription_fini(&sub_141, &node);
    rc = rcl_subscription_fini(&sub_142, &node);
    rc = rcl_subscription_fini(&sub_143, &node);
    rc = rcl_subscription_fini(&sub_144, &node);
    rc = rcl_subscription_fini(&sub_145, &node);
    rc = rcl_subscription_fini(&sub_146, &node);
    rc = rcl_subscription_fini(&sub_147, &node);
    rc = rcl_subscription_fini(&sub_148, &node);
    rc = rcl_subscription_fini(&sub_149, &node);
    rc = rcl_subscription_fini(&sub_150, &node);
    rc = rcl_subscription_fini(&sub_151, &node);
    rc = rcl_subscription_fini(&sub_152, &node);
    rc = rcl_subscription_fini(&sub_153, &node);
    rc = rcl_subscription_fini(&sub_154, &node);
    rc = rcl_subscription_fini(&sub_155, &node);
    rc = rcl_subscription_fini(&sub_156, &node);
    rc = rcl_subscription_fini(&sub_157, &node);
    rc = rcl_subscription_fini(&sub_158, &node);
    rc = rcl_subscription_fini(&sub_159, &node);
    rc = rcl_subscription_fini(&sub_160, &node);
    rc = rcl_subscription_fini(&sub_161, &node);
    rc = rcl_subscription_fini(&sub_162, &node);
    rc = rcl_subscription_fini(&sub_163, &node);
    rc = rcl_subscription_fini(&sub_164, &node);
    rc = rcl_subscription_fini(&sub_165, &node);
    rc = rcl_subscription_fini(&sub_166, &node);
    rc = rcl_subscription_fini(&sub_167, &node);
    rc = rcl_subscription_fini(&sub_168, &node);
    rc = rcl_subscription_fini(&sub_169, &node);
    rc = rcl_subscription_fini(&sub_170, &node);
    rc = rcl_subscription_fini(&sub_171, &node);
    rc = rcl_subscription_fini(&sub_172, &node);
    rc = rcl_subscription_fini(&sub_173, &node);
    rc = rcl_subscription_fini(&sub_174, &node);
    rc = rcl_subscription_fini(&sub_175, &node);
    rc = rcl_subscription_fini(&sub_176, &node);
    rc = rcl_subscription_fini(&sub_177, &node);
    rc = rcl_subscription_fini(&sub_178, &node);
    rc = rcl_subscription_fini(&sub_179, &node);
    rc = rcl_subscription_fini(&sub_180, &node);
    rc = rcl_subscription_fini(&sub_181, &node);
    rc = rcl_subscription_fini(&sub_182, &node);
    rc = rcl_subscription_fini(&sub_183, &node);
    rc = rcl_subscription_fini(&sub_184, &node);
    rc = rcl_subscription_fini(&sub_185, &node);
    rc = rcl_subscription_fini(&sub_186, &node);
    rc = rcl_subscription_fini(&sub_187, &node);
    rc = rcl_subscription_fini(&sub_188, &node);
    rc = rcl_subscription_fini(&sub_189, &node);
    rc = rcl_subscription_fini(&sub_190, &node);
    rc = rcl_subscription_fini(&sub_191, &node);
    rc = rcl_subscription_fini(&sub_192, &node);
    rc = rcl_subscription_fini(&sub_193, &node);
    rc = rcl_subscription_fini(&sub_194, &node);
    rc = rcl_subscription_fini(&sub_195, &node);
    rc = rcl_subscription_fini(&sub_196, &node);
    rc = rcl_subscription_fini(&sub_197, &node);
    rc = rcl_subscription_fini(&sub_198, &node);
    rc = rcl_subscription_fini(&sub_199, &node);
    rc = rcl_timer_fini(&timer0);
    rc = rcl_timer_fini(&timer1);
    rc = rcl_timer_fini(&timer2);
    rc = rcl_timer_fini(&timer3);
    rc = rcl_timer_fini(&timer4);
    rc = rcl_timer_fini(&timer5);
    rc = rcl_timer_fini(&timer6);
    rc = rcl_timer_fini(&timer7);
    rc = rcl_timer_fini(&timer8);
    rc = rcl_timer_fini(&timer9);
    rc = rcl_node_fini(&node);
  }
  return 0;
}
