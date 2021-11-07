cmake_minimum_required(VERSION 3.20)
project(my_bc_py C)

set(CMAKE_C_STANDARD 99)

add_executable(my_bc_py main.c my_token.h my_lexer.h my_lexer.c my_token.c nodes.h nodes.c parser.h parser.c)
