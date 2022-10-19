cmake_minimum_required(VERSION 3.23)
project(flowstructure)

set(CMAKE_CXX_STANDARD 14)

add_executable(flowstructure main.cpp)

add_executable(01_singlerow_if 01_singlerow_if.cpp)
add_executable(02_morerow_if 02_morerow_if.cpp)
add_executable(03_condition_if 03_condition_if.cpp)
add_executable(04_nesting_if 04_nesting_if.cpp)
add_executable(05_threepig 05_threepig.cpp)
add_executable(06_triad 06_triad.cpp)
add_executable(07_switch 07_switch.cpp)