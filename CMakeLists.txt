cmake_minimum_required(VERSION 3.0.2)
project(hello_projet)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  nav_msgs
  roscpp
  rospy
  sensor_msgs
  std_msgs
  tf
  tf2
  tf2_ros
)
catkin_package(
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(talker src/talker.cpp)    
target_link_libraries(talker ${catkin_LIBRARIES}) 

add_executable(listener src/listener.cpp)    
target_link_libraries(listener ${catkin_LIBRARIES}) 