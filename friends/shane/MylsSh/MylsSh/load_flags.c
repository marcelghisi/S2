#include "my_ls.h"

#define MY_LS_ENV 'M'

flags* set_object(int ac)
{
    flags* result = (flags*)malloc(sizeof(flags));
    result->a = 0;
    result->t = 0;
    result->size = 0;
    result->dir_container = NULL;
    return result;
}

int set_flags(flags* result, char* str)
{
    int index = 1;
    while (str[index] != '\0')
    {
        if (str[index] == 'a')
        {
            result->a = 1;
        }
        if (str[index] == 't')
        {
            result->t = 1;
        }
        if (str[index] != 'a' && str[index] != 't')
        {
            printf("my_ls: invalid option -- \'%c\'\n", str[index]);
            return -1;
        }
        index++;
    }
    return 0;
}

int comp_dir_by_tm(struct dir* file1, struct dir* file2)
{
    if ((file1->milliseconds) != (file2->milliseconds))
    {
        return my_difftime(file1->milliseconds, file2->milliseconds);
    }
    else
    { // if they were modificated in one time, then sort in lexicographical order

        return my_strcmp(file1->name, file2->name);
    }
}

struct dir* set_dir(struct dir* head, char* name,flags* flag, long long mil_seconds)
{
    struct dir* ptr = malloc(sizeof(struct dir));
    ptr->name = name;
    ptr->milliseconds = mil_seconds;
    ptr->next = NULL;
    struct dir** temp = &head;
    if (flag->t == 0)
    {
        while (*temp != NULL && my_strcmp(ptr->name, (*temp)->name) >= 0)
        {
            temp = &(*temp)->next;
        }
    }
    else  // trying to compare dirs on their mtime
    {
        while (*temp != NULL && comp_dir_by_tm(ptr, *temp) >= 0)
        {
            temp = &(*temp)->next;
        }
    }
    ptr->next = *temp;
    *temp = ptr;
    return head;
}

flags* load_flags(int ac, char** av)
{
    flags* result = set_object(ac);
    struct dir* head = NULL;
    int index = 1;
    int size = 0;
    int ret;
    while (index < ac)
    {
        if (av[index][0] == '-')
        {
            ret = set_flags(result, av[index]);
        }
        else
        {
            struct stat statbuf;
            long long mils = 0;
            stat(av[index], &statbuf);

#if MY_LS_ENV == 'L'
        mils = statbuf.st_mtim.tv_sec*1000 + rounded;
#else
        mils = statbuf.st_mtimespec.tv_sec*1000 + lround(statbuf.st_mtimespec.tv_nsec/1.0e6);
#endif
            head = set_dir(head, av[index], result,mils);
            size++;
        }
        index++;
    }
    result->dir_container = head;
    if (ret == -1)
    {
        result->size = ret;
    }
    else
    {
        result->size = size;
    }
    return result;
}
