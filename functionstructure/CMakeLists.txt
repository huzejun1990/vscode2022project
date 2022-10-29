cmake_minimum_required(VERSION 3.23)
project(functionstructure)

set(CMAKE_CXX_STANDARD 14)

add_executable(functionstructure main.cpp)

add_executable(01_define 01_define.cpp swap.cpp swap.h)
add_executable(02_use 02_use.cpp)
add_executable(03_passvalue 03_passvalue.cpp)
add_executable(04_oftenstyle 04_oftenstyle.cpp)
add_executable(05_declare 05_declare.cpp)
add_executable(06_subdocument 06_subdocument.cpp swap.cpp swap.h)
