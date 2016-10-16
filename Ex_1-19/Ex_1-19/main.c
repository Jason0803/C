//
//  main.c
//  Ex_1-19
//
//  Created by Soo Young Choi on 10/16/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>

/*
int getLineLength(char line[]) {
    int length = 0;
    while (line[length] != 0) length++;
    
    return length;
}
*/

void reverse(char line[], int length){
    int index = 0;
    
    for(int i = length; i >= 0; i--) putchar(line[i]);
    
    printf("\n");
}
int main(int argc, const char * argv[]) {

    int c;
    int length = 0;
    char line[1024];
    
    while((c = getchar()) != EOF){
        if(c != '\n'){
            line[length] = c;
            length++;
        } else {
            reverse(line, length);
            length = 0;
        }
    }
    
    return 0;
}
