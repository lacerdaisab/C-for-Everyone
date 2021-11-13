/* Fundamental types Declaration and Assignment
by Isabel Lacerda
Nov. 13, 2021 */

#include <stdio.h>

int main () {
    int a = 1, b = 3, c = 7; //declare and initialize
    double average = 0.0;

    printf("a = %d, b = %d, c = %d\n",
    a, b, c);
    average = (a + b + c)/3.0;
    printf("average = %lf",
    average);

    return 0;
}