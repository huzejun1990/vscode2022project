cmake_minimum_required(VERSION 3.23)
project(jumpstructure)

set(CMAKE_CXX_STANDARD 14)

add_executable(jumpstructure main.cpp)

add_executable(01_break 01_break.cpp)
add_executable(02_continue 02_continue.cpp)
add_executable(03_goto 03_goto.cpp)