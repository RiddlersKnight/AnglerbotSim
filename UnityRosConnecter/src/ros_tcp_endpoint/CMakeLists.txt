cmake_minimum_required(VERSION 2.8.3)
project(ros_tcp_endpoint)

find_package(catkin REQUIRED COMPONENTS
  rospy
  std_msgs
  catkin REQUIRED COMPONENTS message_generation ${MSG_DEPS}
)

set(MSG FILES
AnglerbotMovement.msg
)

add_message_files(DIRECTORY msg FILES ${MSG_FILES})

catkin_python_setup()

catkin_package(CATKIN_DEPENDS message_runtime )
