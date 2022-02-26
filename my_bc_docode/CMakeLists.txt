cmake_minimum_required(VERSION 3.20)
project(my_bc_docode C)

set(CMAKE_C_STANDARD 99)

add_executable(my_bc_docode my_bc.c my_lexer.c my_lexer.h my_readline.h my_readline.c my_token.h my_token.c nodes.h nodes.c parser.h parser.c utils.h utils.c)
