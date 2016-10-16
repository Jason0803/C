//
//  main.c
//  Ex_1-18
//
//  Created by Soo Young Choi on 10/16/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /// Exercise 1-18 : Print given lines excluding that tabs
    int c;
    int index = 0;
    char line[1000];
    
    while((c = getchar()) != EOF){
        if(c != '\n'){
            if(c != '\t' && c != ' '){
                line[index] = c;
                index++;
            }
        } else {
            line[index] = '\0';
            printf("%s", line);
            index = 0;
        }
    }
    
    return 0;
}
