cmake_minimum_required(VERSION 3.20)
project(my_zsh C)

set(CMAKE_C_STANDARD 99)

add_executable(my_zsh main.c prompt.c shell.h)
