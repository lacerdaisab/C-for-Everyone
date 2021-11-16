/* Week - second test
by Isabel Lacerda
Nov. 15, 2021 */

/* Write a C program that has a function that prints 
a table of values for sine and cosine between (0, 1). */

#include <stdio.h>
#include <math.h> 

int main () {
    double interval; int i;
    for (i = 0; i <= 1; i++) {
        interval = i/10.0;
        printf("sin (%lf) = %lf\n\n", interval, sin(interval));
        printf("cos (%lf) = %lf\n\n", interval, cos(interval));
    }
    return 0;
}

