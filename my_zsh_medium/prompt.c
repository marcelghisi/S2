//
// Created by Marcel Ghisi on 06/02/22.
//

#include <stdio.h>
#include "shell.h"
#include "symtab.h"

void prompt_main_line(void)
{
    struct symtab_entry_s *entry = get_symtab_entry("PS1");
    if(entry && entry->val)
    {
        fprintf(stderr, "%s", entry->val);
    }
    else
    {
        fprintf(stderr, "$ ");
    }
}
void prompt_sub_line(void)
{
    struct symtab_entry_s *entry = get_symtab_entry("PS2");

    if(entry && entry->val)
    {
        fprintf(stderr, "%s", entry->val);
    }
    else
    {
        fprintf(stderr, "> ");
    }
}