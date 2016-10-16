//
//  main.c
//  Ex_1-22
//
//  Created by Soo Young Choi on 10/16/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>
#define FOLD 60

int main(int argc, const char * argv[]) {
    // Exercise 1-22 : Split long line into multiple lines
    // Strategy : In a line, per 60 chars, put '\n' to the current index.
    
    int c;
    int index = 0;
    int count = 0;  // length of current line;
    char line[1024];
    
    while((c = getchar()) != EOF){
        if(c != '\n'){
            if(count == FOLD){
                if(c == '\t' || c == ' '){
                    line[index] = '\n';
                    count = 0;
                } else {
                    line[index++] = '\n';
                    line[index] = c;
                }
                index++;
                count = 0;
            } else {
                line[index++] = c;
                count++;
            }
        } else {
            printf("%s\n", line);
            index = 0;
            count = 0;
        }
    }
    return 0;
}
