/* Expression Evaluation
by Isabel Lacerda
Nov. 13, 2021 */

#include <stdio.h>

int main () {
    int a = 3, b = 4, c, d; //initialize

    c = a - b;
    printf("a = %d, b = %d, c = %d, d = %d\n", 
    a, b, c, d);

    c = b - a;
    printf("a = %d, b = %d, c = %d, d = %d\n", 
    a, b, c, d);

    c = a % b; d = b % a;
    printf("a = %d, b = %d, c = %d, d = %d\n", 
    a, b, c, d);

    c = -a - b; d = -b - a;
    printf("a = %d, b = %d, c = %d, d = %d\n",
    a, b, c, d);

    c = ++a + b++; d += 5;
    printf("a = %d, b = %d, c = %d, d = %d\n",
    a, b, c, d);
}