//
//  main.c
//  FahrToCels
//  Description : Print table of fahr - cels
//  Created by Soo Young Choi on 10/8/16.
//  Copyright © 2016 Jason Choi. All rights reserved.
//

#include <stdio.h>


main(int argc, const char * argv[]) {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;          /* lower limit of temperate table */
    upper = 3000;        /* upper limit */
    step = 20;          /* step size */
    
    
    // Use of While loop
    
    /*
    fahr = lower;
     while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%6.0f %12.1f\n", fahr, celsius);
        fahr += step;
    }
    */
    
    // Use of For loop
    
    for(fahr = lower; fahr <= upper; fahr+=step){
        printf("%6.0f %12.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}
