#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
   int value;
   struct s_list *next;
} t_list;

t_list *newElem(t_list *ptr, int number)
{
    t_list *newElem;
    
    if (!(newElem = malloc(sizeof(t_list))))
        exit(1);
    
    newElem->value = number;
    newElem->next = ptr;
    return newElem;
}

void printList(t_list *ptr)
{
    t_list *tmp = ptr;

    if (!tmp)
        printf("list is empty");
    while (tmp)
    {
        printf("%d ", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
}

t_list *mergeList(t_list *ptr, t_list *ptr2){
    t_list *head = ptr;
    t_list *current = ptr2;
    while (current != NULL) {
        head = newElem(head, current->value);
        current = current->next;
    }
    return head;

}



int main()
{
   t_list *List1 = NULL;

   t_list *List2 = NULL;
   List1 = newElem(List1, 1);
   List1 = newElem(List1, 2);
   List1 = newElem(List1, 4);
  
   List2 = newElem(List2, 1);
   List2 = newElem(List2, 3);
   List2 = newElem(List2, 4);
 
   t_list *newLst = mergeList(List1, List2);

   printList(newLst);
    return 0;
 
}
