//
//  main.c
//  PrintEOF
//  Exercise 1-6 & 1-7
//  File read / write & validation of EOF
//  Created by Soo Young Choi on 10/15/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>

// Excercise 1-6 & 1-7
int main(int argc, const char * argv[]) {
    char c;
    
    // Excercise 1-7 : Value of EOF is defined as -1
    printf("Value of EOF is defined as : %d\n", EOF);
    
    while ((c=getchar()) != EOF){
        // Excercise 1-6 : if 'c=getchar()!=EOF' is 0, the while loop would not be executed,
        //                  so the value must be '1'
        putchar(c);
    }
    
    return 0;
}
