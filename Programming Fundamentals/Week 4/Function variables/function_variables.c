/* Function variables - with call-by-value explained 
by Isabel Lacerda
Nov. 16, 2021 */

#include <stdio.h>

int computeSumToN (int n); 

int main () {
    int n;
    printf("Input a number: ");
    scanf("%d", &n);

    printf("computeSumToN = %d, n = %d", computeSumToN(n), n);
    printf("\n\n");
    return 0;
}

int computeSumToN (int n) {
    int sum = 0;
    for (; n > 0; n--) {
        sum += n;
        return sum;
    }
}

// convertion
// the input can be double or float but the function just returns integer