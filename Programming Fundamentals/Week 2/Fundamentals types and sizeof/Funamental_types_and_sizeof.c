/* Fundamental types and size of 
by Isabel Lacerda
Nov. 13, 2021*/

#include <stdio.h>

int main () {

    char ch = "i";

    printf("On my system\n");
    printf("int is %lu bytes\n", sizeof(int));
    printf("char is %lu bytes\n", sizeof(ch));
    printf("long is %lu bytes\n", sizeof(long));
    printf("float is %lu bytes\n", sizeof(float));
    printf("double is %lu bytes\n", sizeof(double));
    printf("long double is %lu bytes\n", sizeof(long double));

    return 0;
}