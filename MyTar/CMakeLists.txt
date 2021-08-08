cmake_minimum_required(VERSION 3.19)
project(MyTar C)

set(CMAKE_C_STANDARD 99)

add_executable(MyTar main.c my_tarlib.h my_tarlib.c)