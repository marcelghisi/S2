cmake_minimum_required(VERSION 3.20)
project(bc C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address")
add_executable(bc main.c my_lexer.h my_lexer.c my_readline.c my_readline.h my_token.c my_token.h nodes.c nodes.h parser.c parser.h utils.c utils.h)
