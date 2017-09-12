//
//  Stack.c
//  BinaryTree_Algorithm
//
//  Created by Soo Young Choi on 9/12/17.
//  Copyright © 2017 Jason Choi. All rights reserved.
//

#include <stdio.h>
#include "Node.h"

#define MAX 100

NODE *Stack[MAX];
int Top = 0;

void InitializeStack(void);
void Push(NODE *);
NODE *Pop(void);
int IsStackEmpty(void);

// Initialize
void InitializeStack(void) {
    Top = 0;
}

void Push(NODE *ptrNode) {
    Stack[Top] = ptrNode;
    Top = Top % MAX;
    Top++;
}

NODE *Pop(void) {
    NODE *ptrNode;
    
    if(!IsStackEmpty()) {
        ptrNode = Stack[--Top];
        return ptrNode;
    }
    
    else printf("Stack is Empty !");
    
    return NULL;
}

int IsStackEmpty(void) {
    if(Top == 0) return TRUE;
    else return FALSE;
}
