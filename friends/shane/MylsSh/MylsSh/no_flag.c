#include "my_ls.h"

void no_flag(char *str)
{
    struct file_tm *head = NULL;
    struct dirent *entry;
    DIR *dir;
    dir = opendir(str);
 if (dir == 0){
        printf("%s  ", "No such file or directory");
        return;
    }
    while ((entry = readdir(dir)) != NULL)
    {
        if (entry->d_name[0] != '.')
        {
            head = insert(str,head, entry);
        }
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
