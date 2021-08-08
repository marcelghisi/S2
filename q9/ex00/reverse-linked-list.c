#include <stdio.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- reverse_linked_list
**
** @param {listnode*} param_1
**
** @return {listnode*}
**
*/
#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif

#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif


listnode* reverse_linked_list(listnode* param_1)
{
    listnode* previous = NULL;
    listnode* current = param_1;
    while (current != NULL) {
        listnode* next_element = current->next;
        current->next = previous;
        previous = current;
        current = next_element;
    }
    return previous;
}

int main(){

    listnode* node5= (listnode*)malloc(sizeof(listnode));
    node5->val = 1;
    node5->next = NULL;

    listnode* node4= (listnode*)malloc(sizeof(listnode));
    node4->val = 2;
    node4->next = node5;

    listnode* node3= (listnode*)malloc(sizeof(listnode));
    node3->val = 3;
    node3->next = node4;

    listnode* node2= (listnode*)malloc(sizeof(listnode));
    node2->val = 4;
    node2->next = node3;

    listnode* node1= (listnode*)malloc(sizeof(listnode));
    node1->val = 5;
    node1->next = node2;

    listnode* ret = reverse_linked_list(node1);

    return 0;
}