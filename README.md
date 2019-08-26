# ros2_performance_c_LET_executor
Package with example code to show the performance of the C implementation of the LET executor.

## Package goal
Use the C executor that was created as part of the OFERA-project http://www.ofera.eu/, https://github.com/micro-ROS/rcl_executor , with the same setup as https://github.com/nobleo/ros2_performance to show a difference in CPU usage based on executor. This package provides the user-level C code that utilizes the rcl_executor.

## Package summary

**Tests were performed on the Dashing Diademata release of ROS 2. Results may vary for different releases. Future releases may have resolved the issues discussed below.**

This package provides different publisher subscriber setups that generate the same traffic.

| Binary  | publishers | subscribers | ROS | ROS nodes | ROS timers | DDS participants |
| ------------- | ------------- |------------- |------------- |------------- |------------- |------------- |
| ros | 20  | 200 | yes | 10 | 10 | 10 |
| rosonenode | 20 | 200 | yes | 1 | 1 | 1 |

Running the C examples from this package and C++ examples from https://github.com/nobleo/ros2_performance in isolated docker containers gives the following result: TODO: add docker files + image
  
## Recreating the setup
This package depends on the rcl_executor so first follow the steps in the README at https://github.com/micro-ROS/rcl_executor on how to install the rcl_executor and make sure to add it to your workspace or separately source it when using this package.

To be able to compare the different executors make sure you also have https://github.com/nobleo/ros2_performance installed following the steps in the README there.

Similarly to the other ros2_performance package it is possible to git clone this repository, build the workspace using colcon build and inspect the CPU usage with top or a similar program for each binary individually. It is however much easier to give each binary its own container (make sure to separate their networks or give them a unique ROS_DOMAIN_ID) and measure the usage of each container.

TODO: docker steps

## Creating custom user-level C code (different setups of nodes, publishers, subscribers and timers)
Because writing user-level code in C directly on top of the RCL layer can be quite tedious we made a generator.py script that can automatically generate code based on several inputs. This generator is a useful tool to quickly generate code that can be copy pasted and edited, but should not be used in a real product. No guarantees are given on the quality or validity of the code generated by the generator.
