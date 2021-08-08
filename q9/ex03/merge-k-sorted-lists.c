#include <stdio.h>
#include <stdlib.h>


/*
**
** QWASAR.IO -- merge_k_sorted_lists
**
** @param {listnode_array*} param_1
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

#ifndef STRUCT_LISTNODE_ARRAY
#define STRUCT_LISTNODE_ARRAY
typedef struct s_listnode_array
{
    int size;
    listnode **array;
} listnode_array;
#endif

#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif

listnode* sorted_merge(listnode* a, listnode* b)
{
    listnode* result = NULL;
 
    /* Base cases */
    if (a == NULL)
        return (b);
    else if (b == NULL)
        return (a);
 
    /* Pick either a or b, and recur */
    if (a->val <= b->val) {
        result = a;
        result->next = sorted_merge(a->next, b);
    }
    else {
        result = b;
        result->next = sorted_merge(a, b->next);
    }
 
    return result;
}


listnode* merge_k_sorted_lists(listnode_array* param_1)
{
    int size = param_1->size;
    listnode** arr = param_1->array;
    //int* ret = malloc();

    // repeat until only one list is left
    while (size != 0) {
        int i = 0, j = size;
 
        // (i, j) forms a pair
        while (i < j) {
            // merge List i with List j and store
            // merged list in List i
            arr[i] = sorted_merge(arr[i], arr[j]);
 
            // consider next pair
            i++, j--;
 
            // If all pairs are merged, update last
            if (i >= j)
                size = j;
        }
    }



    return arr[0];

}

int main(){

    listnode* node22= (listnode*)malloc(sizeof(listnode));
    node22->val = 6;
    node22->next = NULL;

    listnode* node12= (listnode*)malloc(sizeof(listnode));
    node12->val = 2;
    node12->next = node22;

    listnode* node30= (listnode*)malloc(sizeof(listnode));
    node30->val = 5;
    node30->next = NULL;

    listnode* node20= (listnode*)malloc(sizeof(listnode));
    node20->val = 4;
    node20->next = node30;

    listnode* node10= (listnode*)malloc(sizeof(listnode));
    node10->val = 1;
    node10->next = node20;

    listnode* node31= (listnode*)malloc(sizeof(listnode));
    node31->val = 4;
    node31->next = NULL;

    listnode* node21= (listnode*)malloc(sizeof(listnode));
    node21->val = 3;
    node21->next = node31;

    listnode* node11= (listnode*)malloc(sizeof(listnode));
    node11->val = 1;
    node11->next = node21;

    listnode** list = (listnode**)malloc(((3+1) * sizeof(listnode*)));
    list[0] = node10;
    list[1] = node11;
    list[2] = node12;
    //list[3] = 0;

    listnode_array* node1= (listnode_array*)malloc(sizeof(listnode_array));
    node1->size = 3;
    node1->array = list;

    listnode* head = merge_k_sorted_lists(node1);

    return 0;
}