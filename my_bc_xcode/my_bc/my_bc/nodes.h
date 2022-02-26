//
// Created by Marcel Ghisi on 07/11/21.
//

#ifndef MY_BC_PY_NODES_H
#define MY_BC_PY_NODES_H


typedef struct Node_S{
    int number_a;
    int number_b;
    int result;
} Node;

Node* AddedNode_ctor(int na, int nb);
Node* SubtractedNode_ctor(int na, int nb);
Node* MultipliedNode_ctor(int na, int nb);
Node* DividedNode_ctor(int na, int nb);
Node* ModuleNode_ctor(int na, int nb);

#endif //MY_BC_PY_NODES_H

