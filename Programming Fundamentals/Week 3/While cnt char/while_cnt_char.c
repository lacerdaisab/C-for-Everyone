/* While constant char
by Isabel Lacerda
Nov. 14, 2021 */

#include <stdio.h>

int main () {
    int blanks = 0, letters = 0, digits = 0, others = 0;
    int c; //use for it value of character

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++blanks;
        else if (c >= "0" && c <= "9")
            ++digits;
        else if (c >= "a" && c <= "z" || c>= "A" && c <= "Z")
            ++letters;
        else
            ++others;
    }
    printf("blanks = %d, digits = %d, letter = %d,", 
    blanks, digits, letters);
    printf("others = %d\n\n", others);
    return 0;
}