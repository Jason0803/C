//
//  main.c
//  Ex_1-10
//
//  Created by Soo Young Choi on 10/15/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Excercise 1-10 : "Write a program to copy its input to its output, replacing each tabby\t,eachbackspaceby\b,andeachbackslashby\\. Thismakestabs and backspaces visible in an unambiguous way"
    
    // E.g. Input : I   love\you
    //      Output : I\tlove\\you
    
    char c;         // input value
    
    while((c = getchar()) != EOF){
        if( c == '\t' || c == '\b' || c == '\\'){
            putchar('\\');
            if(c == '\t') putchar ('t');
            else if (c == '\b') putchar('b');
            else putchar('\\');
        } else putchar(c);
    }

    return 0;
}
