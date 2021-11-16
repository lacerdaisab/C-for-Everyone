/* Table of squares and cubes
by Isabel Lacerda
Nov. 15, 2021 */

#include <stdio.h>

double square (double);
double cube (double);

int main () {
    int howMany = 0, i, j;
    printf("I want square and cube for 1 to n where n is: ");

    scanf("%d", &howMany);
    printf("\n square and cubes by interval of .1\n");

    for (i = 1; i <= howMany; i++) { //outter loop
        for (j = 0; j < 10; j++) { // inner loop
            printf("\n%lf\t %lf\t %lf",
                i + j/10.0, square(i + j/10.0), cube(i+j/10.0));
        }
    }
    printf("\n\n");
    return 0;
}

double square (double x) {
    return (x * x);
}

double cube (double x) {
    return (x * x * x);
}