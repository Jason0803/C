//
//  main.c
//  SelectionSort
//
//  Created by Soo Young Choi on 9/13/17.
//  Copyright © 2017 Jason Choi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define TRUE 1
#define FALSE 0

void MakeRandomNumber(void);
void SelectionSort(void);
void InsertionSort(void);
void QuickSort(int data[], int, int);
void DisplayBuffer(void);
int IsNumberExit(int, int);
int Buf[MAX];

void MakeRandomNumber(void) {
    int i, Num;
    i = 1;
    // srand((unsigned)time(NULL));
    Buf[0] = 100;
    while(i < MAX) {
        Num = rand() % MAX;
        if(!IsNumberExit(Num, i)) {
            Buf[i] = Num;
            i++;
        }
    }
}

void SelectionSort(void) {
    int i, j, min, dummy;
    
    for(i = 0; i < MAX; i++) {
        min = i;
        
        for(j = i+1; j < MAX; j++) {
            if(Buf[j] < Buf[min]) {
                min = j;
            }
        }
        
        dummy = Buf[min];
        Buf[min] = Buf[i];
        Buf[i] = dummy;
    }
}

void InsertionSort(void) {
    int i, j, dummy;
    
    for(i = 1; i < MAX; i++) {
        dummy = Buf[i];
        j = i;
        
        while(Buf[j-1] > dummy && j > 0) {
            Buf[j] = Buf[j-1];
            j--;
        }
        
        Buf[j] = dummy;
    }
}

/*
void ShellSort(void) {
    int i, j, h, v;
    for(h = 0; h < MAX; h= 3*h+1);
    for(; h > 0; h /= 3) {
        for(i = h; i < MAX; i++) {
            v = Buf[i];
            j = i;
            
            while(j >= h && Buf[j-h] > v) {
                Buf[j] = Buf[j-h];
                j -= h;
            }
            
            Buf[j] = v;
        }
    }
}
*/

void QuickSort(int data[], int left, int right) {
    int num, i, j, temp;
    if(right > left) {
        num = data[right];
        i = left-1;
        j = right;
        
        for(;;) {
            while(data[++i] < num);
            while(data[--j] > num);
                if(i > j) break;
            
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
        temp = data[i];
        data[i] = data[right];
        data[right] = temp;
        
        QuickSort(data, left, i-1);
        QuickSort(data, i+1, right);
    }
}
void DisplayBuffer(void) {
    int i;
    
    for(i = 0; i < MAX; i++) {
        if( (i%10) == 0) {
            printf("\n");
        }
        
        printf("%4d", Buf[i]);
    }
    printf("\n");
}

int IsNumberExit(int number, int index) {
    int i;
    
    for(i = 0; i < index; i++) {
        if(Buf[i] == number || number == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

int main(int argc, const char * argv[]) {
    printf("Initialize...\n");
    
    MakeRandomNumber();
    DisplayBuffer();
    
    printf("After Sorting..\n");
    //SelectionSort();
    //InsertionSort();
    QuickSort(Buf, 0, MAX-1);
    DisplayBuffer();
    
    return 0;
}
