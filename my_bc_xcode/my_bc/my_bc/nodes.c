//
// Created by Marcel Ghisi on 07/11/21.
//
#include "nodes.h"
#include <stdlib.h>

Node* AddedNode_ctor(int na, int nb){
    Node *node = (Node*)malloc(sizeof(Node));
    node->number_a = na;
    node->number_a = nb;
    node->result = na + nb;
    return  node;
}

Node* SubtractedNode_ctor(int na, int nb){
    Node *node = (Node*)malloc(sizeof(Node));
    node->number_a = na;
    node->number_a = nb;
    node->result = na - nb;
    return  node;
}

Node* MultipliedNode_ctor(int na, int nb){
    Node *node = (Node*)malloc(sizeof(Node));
    node->number_a = na;
    node->number_a = nb;
    node->result = na * nb;
    return  node;
}

Node* DividedNode_ctor(int na, int nb){
    //Euclidean division as a and b are integers the truncate is the q
    Node *node = (Node*)malloc(sizeof(Node));
    node->number_a = na;
    node->number_a = nb;
    node->result = na / nb;
    return  node;
}

Node* ModuleNode_ctor(int na, int nb){
    Node *node = (Node*)malloc(sizeof(Node));
    node->number_a = na;
    node->number_a = nb;
    node->result = na % nb;
    return  node;
}
