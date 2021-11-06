cmake_minimum_required(VERSION 3.20)
project(my_blockchain C)

set(CMAKE_C_STANDARD 99)

add_executable(my_blockchain main.c functions_structures.h run_functions.c cmd_functions.c my_own_functions.c run_functions.h)
