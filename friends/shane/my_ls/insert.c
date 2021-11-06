#include "my_ls.h"

struct file_tm *insert_tm(struct file_tm *head, char *name, long long mil_seconds)
{
    struct file_tm *ptr = malloc(sizeof(struct file_tm));
    ptr->name = name;
    ptr->milliseconds = mil_seconds;
    ptr->next = NULL;
    struct file_tm **temp = &head;
    while (*temp != NULL && comp_tm(ptr, *temp) >= 0)
    {
        temp = &(*temp)->next;
    }
    ptr->next = *temp;
    *temp = ptr;
    return head;
}