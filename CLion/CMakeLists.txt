cmake_minimum_required(VERSION 3.19)
project(CLion C)

set(CMAKE_C_STANDARD 99)

add_executable(CLion main.c my_lslib.h my_lslib.c)