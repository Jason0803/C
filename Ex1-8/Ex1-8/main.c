//
//  main.c
//  Ex1-8
//
//  Created by Soo Young Choi on 10/15/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Excercise 1-8 : Count blanks, tabs and new lines
    int c;
    int wordCount = 0;
    int blanks = 0;
    int tabs = 0;
    int newLines = 0;
    
    while ( (c=getchar()) != EOF){
        ++wordCount;
        if(c == ' ') ++blanks;
        if(c == '\t') ++tabs;
        if(c == '\n') ++newLines;
    }
    printf("\nWord count : %d\nBlanks : %d\nTabs : %d\nNew Line : %d\n", wordCount, blanks, tabs, newLines);
                     
    return 0;
}
