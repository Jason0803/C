//
//  main.c
//  MultiBlankToSingleBlank
//  Exceise 1-9 : Multi Blanks to Single Blank
//  Created by Soo Young Choi on 10/15/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    // Excercise 1-9 :  "Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
    
    char c;
    char d = '~'; // indicates it's not a blank
    
    while( (c = getchar()) != EOF){
        if( c == ' ' ){
            if( d != ' ')       // 1. if the current character is blank but
                putchar(c);     //  the last character is not, prints a blank
        } else putchar(c);      // 2. if current character is not a blank, prints it.
        
        d = c;  // put c to d to check whether the previous character is blank.
    }
    return 0;
}
