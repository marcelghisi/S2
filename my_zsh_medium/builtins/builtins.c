//
// Created by Marcel Ghisi on 13/02/22.
//

#include "../shell.h"

struct builtin_s builtins[] =
{
        { "dump"    , dump       },
        { "exit"    , my_exit       },
        { "setenv"    , set_environment       },
        { "unsetenv"    , unset_environment },

};

int builtins_count = sizeof(builtins)/sizeof(struct builtin_s);