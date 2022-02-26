//
// Created by Marcel Ghisi on 30/01/22.
//
#include "my_token.h"
#include "my_lexer.h"
#include "source.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "my_split.h"


void Lexer_ctor(Lexer* me, char* typed, char** env) {
    me->typed_command = typed;
    struct source_s* source = (struct source_s*)malloc(sizeof (struct source_s));
    me->src = source;
    me->src->buffer   = typed;
    me->src->bufsize  = strlen(typed);
    me->src->curpos   = INIT_SRC_POS;
    me->environment_vars = env;
    me->tokens = NULL;
}



char* Lexer_GenTokens(Lexer* me){
    skip_white_spaces(me->src);
    struct token_s *tok = tokenize(me->src);
    me->tokens = tok;
    return NULL;
}
