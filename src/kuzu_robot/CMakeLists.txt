cmake_minimum_required(VERSION 3.0.2)
project(kuzu_robot)

find_package(catkin REQUIRED)

catkin_package()
catkin_install_python(PROGRAMS
  src/cmd_vel.py
  src/imu_to_odom.py
  src/radius_forwarder.py
  src/rviz_circle.py
  src/cmd_vel_joy.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
include_directories(${catkin_INCLUDE_DIRS})

