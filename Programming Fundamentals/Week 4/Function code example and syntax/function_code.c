/* Function code example and syntax
by Isabel Lacerda
Nov. 15, 2021 */

#include <stdio.h>

void wrtVery (int count) {
    while (count > 0)
    {
        printf("\nvery");
        count--;
    }
    printf(" much.\n\n");
}

int main () {
    int repeat = 0;
    printf("How strong is your love 1-10: ");
    scanf("%d", &repeat);
    printf("I love you very");
    wrtVery(repeat);
    return 0;
}

/* type funcName (parameter list) {
    declations
    statements
} 

call this function: funcName(); //in main
eg.

void wrtAddress (void) {
    printf("Claus\n");
    printf("North Pole\n");
} 

Note that first you've to define the function than you can call it

wrtAddress(); //in main
*/