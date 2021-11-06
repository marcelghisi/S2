#include "my_ls.h"

void both_flag(char *str)
{
    struct file_tm *head = NULL;
    struct dirent *entry;
    struct stat statbuf;
    DIR *dir;
    dir = opendir(str);
    while ((entry = readdir(dir)) != NULL)
    {
        if (str[0] != '.')
        {
            char abs_path[50] = "";
            char slash[2] = "/";
            my_strcat(abs_path, str);
            my_strcat(abs_path, slash);
            my_strcat(abs_path, entry->d_name);
            lstat(abs_path, &statbuf);
        }
        else
        {
            lstat(entry->d_name, &statbuf);
        }

        long long mils = 0;
#if MY_LS_ENV == 'L'
        mils = statbuf.st_mtim.tv_sec*1000 + rounded;
#else
        mils = statbuf.st_mtimespec.tv_sec*1000 + lround(statbuf.st_mtimespec.tv_nsec/1.0e6);
#endif

        head = insert_tm(head, entry->d_name,mils);
    }
    struct file_tm *current = head;
    while (current != NULL)
    {
        printf("%s  ", current->name);
        current = current->next;
    }
    printf("\n");
    struct file_tm *tofree;
    while (head != NULL)
    {
        tofree = head;
        head = head->next;
        free(tofree);
    }
    closedir(dir);
}