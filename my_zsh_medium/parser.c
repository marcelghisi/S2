//
// Created by Marcel Ghisi on 30/01/22.
//

//
// Created by Marcel Ghisi on 07/11/21.
//

#include "parser.h"
#include "my_token.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include "shell.h"
#include "executor.h"


void Parser_ctor(Parser* me,struct token_s* tokens){
    me->tokens = tokens;
    me->current_token = tokens;
}

void Parser_exec(Parser* me){

}

struct node_s* Parser_simple_command(Parser* me)
        {
    if(!me->tokens)
    {
        return NULL;
    }

    struct node_s *cmd = new_node(NODE_COMMAND);
    if(!cmd)
    {
        free_token(me->tokens);
        return NULL;
    }

    struct source_s *src = me->tokens->src;

    do
    {
        if(me->tokens->text[0] == '\n')
        {
            free_token(me->tokens);
            break;
        }
        struct node_s *word = new_node(NODE_VAR);
        if(!word)
        {
            free_node_tree(cmd);
            free_token(me->tokens);
            return NULL;
        }
        set_node_val_str(word, me->tokens->text);
        add_child_node(cmd, word);
        free_token(me->tokens);
    } while((me->tokens = tokenize(src)) != &eof_token);
    return cmd;
}

int Parser_parse(Parser* me,char* error){
    if(me->tokens == &eof_token)
    {
        return 0;
    }
    while(me->tokens && me->tokens != &eof_token)
    {
        struct node_s *cmd = Parser_simple_command(me);
        if(!cmd)
        {
            break;
        }
        Executor* executor = (Executor*)malloc(sizeof (Executor));
        Executor_ctor(executor,cmd);
        Executor_execute(executor);
        //do_simple_command(cmd);
        free_node_tree(cmd);
        free(executor);
        me->tokens = tokenize(me->tokens->src);
    }

    return 0;

}
