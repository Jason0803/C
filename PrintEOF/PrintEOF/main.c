//
//  main.c
//  PrintEOF
//  Exercise 1-6 & 1-7
//  File read / write & validation of EOF
//  Created by Soo Young Choi on 10/15/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>

// Before I start it, I reckon that printing out of EOF value is not even making sense AT ALL as it's defined as -1.
int main(int argc, const char * argv[]) {
    
    // Excercise 1-6 & 1-7
    int c;

    while ((c=getchar()) != EOF){
        // Excercise 1-6 : if 'c=getchar()!=EOF' is 0, the while loop would not be executed,
        //                  so the value must be '1'
        putchar(c);
        
        // Excercise 1-7 : Print out the value of EOF
        printf("EOF is : %d\n", EOF);
    }
    
    return 0;
}
