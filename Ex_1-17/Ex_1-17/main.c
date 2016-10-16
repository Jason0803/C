//
//  main.c
//  Ex_1-17
//
//  Created by Soo Young Choi on 10/15/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    // Exercise 1-17 : Write a program to print all input lines that are longer than 80 characters.
    int c;
    int min = 0;
    int max = 80;
    char line[max]; // To store '\0' at the end of line
    
    while((c = getchar()) != EOF){
        if(min < max){                      // til the input characters reach 80
            if(c != '\n'){                  // in a line
                line[min] = c;
                min++;
                
                if(min == max){             // ** reached 80 chars
                    line[min] = '\0';
                    printf("%s", line);
                }
            } else min = 0;                 // less than 80 chas
        } else {
            putchar(c);
            if(c == '\n') min = 0;
        }
    }
    
    return 0;
}

