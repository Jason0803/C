//
//  main.c
//  Ex_1-14
//
//  Created by Soo Young Choi on 10/15/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    // Exercise 1-14 : Frequencies of characters from input
    // From A - Z, count occurrencies from the input
    // ASCII code to be used
    
    int c;
    int ascii[128];
    
    // Initialise
    for(int i = 0; i < 128; i++){
        ascii[i] = 0;
    }
    
    while((c=getchar()) != EOF){
        ascii[c]++;
        
        for(int i = 0; i < 128; i++){
            putchar(i); // print character
            putchar(' ');
            
            for(int j = 0; j < ascii[i]; j++){
                printf("ㅁ");
            }
            
            putchar('\n');
        }
    }
    
    
    return 0;
}
