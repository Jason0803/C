//
//  main.c
//  Ex_1-12
//
//  Created by Soo Young Choi on 10/15/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    // Exerise 1-12 : Print a word per line from input
    
    char c;
    
    while((c=getchar()) != EOF){
        if( c == ' ' || c == '\t' || c == '\n'){
            putchar('\n');
        } else putchar(c);
    }
    
    return 0;
}
