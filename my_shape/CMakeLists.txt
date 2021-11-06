cmake_minimum_required(VERSION 3.20)
project(my_shape C)

set(CMAKE_C_STANDARD 99)

add_executable(my_shape main.c shape.h shape.c rect.h rect.c Circle.h Circle.c)
