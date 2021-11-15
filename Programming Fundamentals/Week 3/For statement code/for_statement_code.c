/* Count blanks, letters, digits and total characters
Demonstrate loop with for statement
by Isabel Lacerda
Nov. 15, 2021 */

#include <stdio.h>

int main () {
    int blanks = 0, letters = 0, digits = 0, totalChar = 0;
    int c;   //use for int value of character
    for (; (c = getchar ()) != EOF; totalChar++) {
        if (c == " ") {
            blanks++;
        }
        if (c >= "0" && c <= "9") {
            digits++;
        }
        if (c >= "a" && c <= "z" || c >= "A" && c <= "Z"){
            letters++;
        }
    printf("\n blanks = %d, digits = %d, letters = %d, totalChar = %d", 
    blanks, digits, letters, totalChar);
    }
    return 0;
}