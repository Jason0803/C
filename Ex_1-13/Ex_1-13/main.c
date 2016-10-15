//
//  main.c
//  Ex_1-13
//
//  Created by Soo Young Choi on 10/15/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>
#define MAX 255


int main(int argc, const char * argv[]) {
    // Exercise 1-13 : Histogram of length of words
    // What I understand about this exercise is liek this :
    // If input is like 'dog fish watermelon'
    // output to be Dog : 3 / Fish : 4 / Watermelon : 10
    // ** what if there I got duplicated words in input? does it count or not
    
    // Expected input : maximum length : 10 per word.
    //                  maximum 10 words
    /*
     ------------- Expected Result ?? --------------
     Dog            / / /
     Fish           / / / /
     WaterMelon     / / / / / / / / / /
     Cat            / / /
     -----------------------------------------------
     */
    
    
    char word[MAX]; // Defined maximum input length is 255
    char c;
    
    int charCount = 0;
    
    while((c = getchar()) != EOF){
        if(c != ' ' && c != '\n'){
            word[charCount] = c;
            charCount++;
        } else {            // in case there i got separator like \n \t
            for(int i = 0; i < charCount; i++)
                putchar(word[i]);
            
            for(int i = 15; i > charCount; i--)
                putchar(' ');
            
            for(int i = 0; i < charCount; i++)
                printf("ㅁ");
            
            printf("\n");
            charCount = 0;
            
            if(c == '\n') break;
        }
    }
    
    
    return 0;
}
