/* Recursive vs. Iterative Factorial
   by Isabel Lacerda
   Nov. 16, 2021 
   n! = 1 * 2 * 3 * ... * n 
*/

#include <stdio.h>

//iteration
long int factorial (int n) {  //long only allows it to work for up to 20
    long f = 1;
    int i;

    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

long int recursive_factorial (int n) {
    if (n == 1) {
        return 1;
    } else {
        return(recursive_factorial(n-1) * n);
    }
}

int main () {
    int howMany = 0, i;
    printf("I want table of factorial up to n: ");

    scanf("%d", &howMany);
    printf("\n factorials\n");

    for(i = 1; i <= howMany; i++) {
        printf("\n%d\t %d\n", i, factorial(i));
    }
    printf("\n\n");
    
    for (i =1; i <= howMany; i++) {
        printf("\n%d\t %ld\n", i, recursive_factorial(i));
    }
    printf("\n\n");
    return 0;
}