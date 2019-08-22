cmake_minimum_required(VERSION 3.5)
project(ros2_performance_c_let_executor)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rcl REQUIRED)
find_package(rcl_executor REQUIRED)

add_executable(ros ros.c)
ament_target_dependencies(ros rcl rcl_executor std_msgs geometry_msgs)

add_executable(rosonenode rosonenode.c)
ament_target_dependencies(rosonenode rcl rcl_executor std_msgs geometry_msgs)

install(TARGETS
  ros
  rosonenode
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
