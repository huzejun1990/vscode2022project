cmake_minimum_required(VERSION 3.23)
project(operator)

set(CMAKE_CXX_STANDARD 14)

add_executable(operator main.cpp)

add_executable(01_calculation 01_calculation.cpp)
add_executable(02_calculation_mode 02_calculation_mode.cpp)
add_executable(03_before_after_plus 03_before_after_plus.cpp)
add_executable(04_assignment 04_assignment.cpp)
add_executable(05_compare 05_compare.cpp)
add_executable(06_logic 06_logic.cpp)
add_executable(07_logic_and 07_logic_and.cpp)
add_executable(08_login_or 08_login_or.cpp)