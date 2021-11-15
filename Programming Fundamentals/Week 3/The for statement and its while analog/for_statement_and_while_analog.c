/* The for statement and its while analog
by Isabel Lacerda
Nov. 15, 2021 */

#include <stdio.h>


int main () {
    //increment
    int i, j = 1;
    for (i = 1; i <= 5; i++) {
        printf("\n\nCount %d sheep", i);
    }
    while (j <= 5) {
        printf("\n\nCount %d ant", j);
        j++;
    }
    //decrement
    int g, d = 5;
        printf("\n\nMy money every time I receive my payment: ");
    for (g = 5; g >= 1; g--) {
        printf("\n%d", g);
    }
        printf("\n\nMy money every time I pay my bills: ");
    while (d >= 1){
        printf("\n%d", d);
        d--;
    }
    return 0;
}

/* Syntax
for (e1; e2, e3) {
    statement
}
typical use:
e1 initializer
e2 terminating condition
e3 increment/decrement

equivalent while
e1;
while (e2) {
    statement;
    e3;
} */