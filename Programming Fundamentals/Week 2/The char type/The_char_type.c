/* Char in C
by Isabel Lacerda
Nov. 13, 2021 */

#include <stdio.h>

int main () {
    char c = 'i';

    printf("c in ASCII is %d\n", c);
    printf("c the character %c\n", c);
    printf("Three consecutive chars are: %c%c%c \n", c, c+1, c+2);
    printf("Three bell rings chars are: %c%c%c", '\a', '\a', '\a');

    return 0;
}