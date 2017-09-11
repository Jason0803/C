//
//  main.c
//  Stack_LinkedList
//
//  Created by Soo Young Choi on 9/11/17.
//  Copyright © 2017 Jason Choi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct _NODE {
    int Data;
    struct _NODE *Next;
} NODE;

NODE *head, *end, *ptrNode;

void InitializeStack(void) {
    head = (NODE *)malloc(sizeof(NODE));
    end = (NODE *)malloc(sizeof(NODE));
    head->Next = end;
    end->Next = end;
}

void Push(int num) {
    ptrNode = (NODE *)malloc(sizeof(NODE));
    ptrNode->Data = num;
    ptrNode->Next = head->Next;
    head->Next = ptrNode;
}

int Pop(void) {
    int ret;
    ptrNode = head->Next;
    head->Next = head->Next->Next;
    ret = ptrNode->Data;
    free(ptrNode);
    
    return ret;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
