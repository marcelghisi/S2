//
// Created by Marcel Ghisi on 26/02/22.
//

#include "../shell.h"
#include "stdlib.h"
#include "../parser.h"
#include "../my_split.h"

int unset_environment(struct node_s *root)
{
    char* argument = root->next_sibling->val.str;
    const char* const_arg = argument;
    int result = unsetenv(const_arg);
    return result;
}