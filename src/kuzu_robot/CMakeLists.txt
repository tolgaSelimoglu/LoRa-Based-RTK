cmake_minimum_required(VERSION 3.0.2)
project(kuzu_robot)

find_package(catkin REQUIRED)

catkin_package()
catkin_install_python(PROGRAMS
  cmd_vel.py
  imu_to_odom.py
  radius_forwarder.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
include_directories(${catkin_INCLUDE_DIRS})

