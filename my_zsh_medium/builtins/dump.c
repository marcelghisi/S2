//
// Created by Marcel Ghisi on 13/02/22.
//

#include "../shell.h"
#include "../symtab.h"

int dump(char *argument)
{
    dump_local_symtab();
    return 0;

}