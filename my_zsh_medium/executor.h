//
// Created by Marcel Ghisi on 06/02/22.
//
#include "nodes.h"
#ifndef MY_ZSH_MEDIUM_EXECUTOR_H
#define MY_ZSH_MEDIUM_EXECUTOR_H

/* Lexer's attribute... */
typedef struct {
    /* constructor implementation */
    struct node_s* command;
} Executor;

void Executor_ctor(Executor* me, struct node_s* command);
int Executor_execute(Executor* me);

char *search_path(char *file);
int do_exec_cmd(int argc, char **argv);
int do_simple_command(struct node_s *node);

#endif //MY_ZSH_MEDIUM_EXECUTOR_H
