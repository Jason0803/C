//
//  main.c
//  Algorithm_LinkedListInsert
//
//  Created by Soo Young Choi on 9/10/17.
//  Copyright © 2017 Jason Choi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// NODE typedef
typedef struct _NODE {
    char Data;
    struct _NODE *Next;
} NODE;

NODE *head, *end, *temp;
NODE *temp1, *temp2, *temp3, *temp4;

void Initialize(void);
void InsertNode(NODE *);
void DeleteNode(NODE *);

void Initialize(void) {
    NODE *ptr;
    head = (NODE *)malloc(sizeof(NODE));
    end = (NODE *)malloc(sizeof(NODE));
    
    temp1 = (NODE *)malloc(sizeof(NODE));
    temp1->Data = 'A';
    head->Next = temp1;
    temp1->Next = end;
    end->Next = end;
    ptr = temp1;
    
    temp2 = (NODE *)malloc(sizeof(NODE));
    temp2->Data = 'B';
    ptr->Next = temp2;
    temp2->Next = end;
    ptr = temp2;
    
    temp3 = (NODE *)malloc(sizeof(NODE));
    temp3->Data = 'D';
    ptr->Next = temp3;
    temp3->Next = end;
    ptr = temp3;
    
    temp4 = (NODE *)malloc(sizeof(NODE));
    temp4->Data = 'E';
    ptr->Next = temp4;
    temp4->Next = end;
    ptr = temp4;
    
}

void InsertNode(NODE *ptr) {
    NODE *indexPtr;
    
    for(indexPtr = head; indexPtr != end; indexPtr = indexPtr->Next) {
        if(indexPtr->Next->Data > ptr->Data)
            break;
    }
    
    ptr->Next = indexPtr->Next;
    indexPtr->Next = ptr;
}

void DeleteNode(NODE *ptr) {
    NODE *indexPtr;
    NODE *deletePtr;
    
    for(indexPtr = head; indexPtr != end; indexPtr = indexPtr->Next) {
        if(indexPtr->Next->Data == ptr->Data) {
            deletePtr = indexPtr->Next;
            break;
        }
    }
    
    indexPtr->Next = indexPtr->Next->Next;
    free(deletePtr);
}


int main(int argc, const char * argv[]) {
    NODE *ptr;
    
    Initialize();
    
    ptr = head->Next;
    
    for(int i = 0; i < 4; i++){
        printf("%2c", ptr->Data);
        ptr = ptr->Next;
    }
    
    printf("\n");
    temp = (NODE *)malloc(sizeof(NODE));
    temp->Data = 'C';
    
    InsertNode(temp);
    
    ptr = head->Next;
    
    for(int i = 0; i < 5; i++) {
        printf("%2c", ptr->Data);
        ptr = ptr->Next;
    }
    
    ptr = head->Next;
    
    printf("\n");
    DeleteNode(temp);
    for(int i = 0; i < 4; i++){
        printf("%2c", ptr->Data);
        ptr = ptr->Next;
    }
    
    printf("\n");
    return 0;
}
