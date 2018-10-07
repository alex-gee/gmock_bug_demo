cmake_minimum_required(VERSION 2.8.3)
project(gmock_bug_demo)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rosunit
)

catkin_package(
  CATKIN_DEPENDS roscpp
)

###########
## Build ##
###########

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

#############
## Install ##
#############

#############
## Testing ##
#############
if(CATKIN_ENABLE_TESTING)
  catkin_add_gtest(unittest_simple_gmock tests/unittest_simple_gmock.cpp)
  target_link_libraries(unittest_simple_gmock gmock)
endif()
