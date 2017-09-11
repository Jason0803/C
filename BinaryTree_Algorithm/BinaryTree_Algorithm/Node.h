//
//  Node.h
//  BinaryTree_Algorithm
//
//  Created by Soo Young Choi on 9/11/17.
//  Copyright © 2017 Jason Choi. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct _NODE {
    char Data;
    struct _NODE *Left;
    struct _NODE *Right;
} NODE;

NODE *HeadNode, *EndNode;

#endif
