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
  
## Recreating the setup
### Automated with docker
Similarly to the other ros2_performance package it is possible to git clone this repository, build the workspace using colcon build and inspect the CPU usage with top or a similar program for each binary individually. It is however much easier to give each binary its own docker container (make sure to separate their networks or give them a unique ROS_DOMAIN_ID) and measure the usage of each container.
If you don't have docker and docker compose installed first follow online tutorials on how to install these: https://docs.docker.com/install/ https://docs.docker.com/compose/install/ .

1. Clone this repository
```
git clone https://github.com/nobleo/ros2_performance_c_LET_executor.git
```
2. cd into the folder 
```
cd ros2_performance_c_LET_executor
```
3. Build the docker image [requires you to have docker installed properly following the links above] (building the image will take a while)
```
docker build -t ros2_performance_c_let_executor:dashing .
```
*you can name the image differently by replacing "ros2_performance_c_let_executor:dashing" by something else, but this will require you to change the docker-compose.yml file accordingly.*

4. Run a compose file
```
cd compose_files
```
here you have 2 options, each folder contains a docker-compose.yml. The "both" folder will start a version of the STE and the LET executor for ros and rosonenode(requires you to have the image from https://github.com/nobleo/ros2_performance, follow similar docker steps in the README there). The "LET" folder will start just the LET implementations.
```
cd both
```
or
```
cd LET
```
then 
```
docker-compose up
```
5. Inspect the CPU usage
In a new terminal (ctrl+alt+t) do:
```
docker stats
```
It is possible to specify the format of the output to show more or less information for example:
```
docker stats --format "table {{.Name}}\t{{.CPUPerc}}\t{{.MemUsage}}\t{{.PIDs}}"
```
This will only display the container Name, the CPU percentage, Memory usage and PIDS.
You should now see a terminal similar to the image above. 

### Manually

This package depends on the rcl_executor so first follow the steps in the README at https://github.com/micro-ROS/rcl_executor on how to install the rcl_executor and make sure to add it to your workspace or separately source it when using this package.

To be able to compare the different executors make sure you also have https://github.com/nobleo/ros2_performance installed following the steps in the README there.
1. Clone this repository
```
git clone https://github.com/nobleo/ros2_performance_c_LET_executor.git
```
2. cd into the folder 
```
cd ros2_performance_c_LET_executor
```
3. source necessary dependencies
```
source ~/<my_ros2_workspace>/install/local_setup.bash
```
if you have a separate workspace for rcl_executor also do
```
source ~/.../rcl_executor/install/local_setup.bash
```
4. colcon build
```
colcon build --symlink-install
```
5. run a binary (replace <binary_name> with ros or rosonenode)
```
./install/ros2_performance_c_let_executor/lib/ros2_performance_c_let_executor/<binary_name>
```
If you run multiple binaries at once, make sure to change the ROS_DOMAIN_ID for each terminal, otherwise the binaries will interfere with each other and publish and subscribe to each others topics. This will greatly increase CPU usage for all binaries and make your results unusable.

## Creating custom user-level C code (different setups of nodes, publishers, subscribers and timers)
Because writing user-level code in C directly on top of the RCL layer can be quite tedious we made a generator.py script that can automatically generate code based on several inputs. This generator is a useful tool to quickly generate code that can be copy pasted and edited, but should not be used in a real product. No guarantees are given on the quality or validity of the code generated by the generator.
