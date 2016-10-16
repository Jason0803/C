//
//  main.c
//  Ex_1-20
//
//  Created by Soo Young Choi on 10/16/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>
#define TAB 4 // Up to IDE setting ??


int main(int argc, const char * argv[]) {
    // Exercise 1-20 : Detab - Replace multiple tabs to a number of blanks ???
    int c;
    int index = 0;
    char line[1024];

    while((c = getchar()) != EOF){
        if(c != '\n'){
            if(c == '\t'){
                for(int i = index; i < index+4; i++){
                    line[i] = '~';
                }
                index += 4;
            } else {
                line[index] = c;
                index++;
            }
        } else {
            printf("%s\n", line);
            index = 0;
        }
    }
    
    return 0;
}
