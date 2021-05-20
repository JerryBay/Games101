cmake_minimum_required (VERSION 2.8.11)
project (Transformation)

find_package(Eigen3 REQUIRED)
include_directories(EIGEN3_INCLUDE_DIR ${CMAKE_SOURCE_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)


add_executable (Transformation test.cpp)
