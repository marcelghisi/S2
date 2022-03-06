cmake_minimum_required(VERSION 3.20)
project(my_zsh_medium C)

set(CMAKE_C_STANDARD 99)

add_executable(my_zsh_medium main.c my_token.h my_token.c my_lexer.c my_lexer.h parser.c parser.h my_readline.c utils.c utils.h my_split.c my_split.h nodes.c nodes.h source.c source.h prompt.c shell.h scanner.c scanner.h executor.c executor.h symtab.h symtab.c initsh.c builtins/builtins.c builtins/dump.c builtins/exit.c builtins/setenv.c builtins/unsetenv.c builtins/cd.c)
