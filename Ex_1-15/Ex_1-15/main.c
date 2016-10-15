//
//  main.c
//  Ex_1-15
//
//  Created by Soo Young Choi on 10/15/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>
// Exercise 1-15 : Re-write temperature conversion using functions

float conversion_Fahr_to_Cels(float fahr){
    float cels = 0.0;
    cels = (5.0)/(9.0) * (fahr-32.0);
    
    return cels;
}

int main(int argc, const char * argv[]) {
    float fahr, cels;
    
    printf("Input temperature in Fahrenheit (one digit after decimal point allowed) : ");
    scanf("%f", &fahr);
    
    cels = conversion_Fahr_to_Cels(fahr);
    
    printf("\nTemperature in Celcius is : %6.1f\n", cels);
    
    return 0;
}
