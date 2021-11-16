/*  Recursive vs. Iterative Fibonacci
    by Isabel Lacerda
    Nov. 16, 2021
    F(n) = F(n - 1) + F(n - 2); F(0) = 0, F(1) = 1     
*/

#include <stdio.h>

//iterative
long fibonacci (int n) {
    long f2 = 0, f1 = 1, fOld;
    int i;

    for (i = 0; i < n; i++){
        fOld = f2;
        f2 = f2 + f1;
        f1 = fOld;
    };

    return f2;
}

long recursive_fibonacci(int n) {
    if(n <= 1) {
        return n;
    } else {
        return(recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2));
    }
}

int main () {
    int howMany = 0, i;
    printf("I want table of fibonacci up to n: ");

    scanf("%d", &howMany);
    printf("\n fibonacci\n");

    for(i = 0; i < howMany; i++) {
        printf("\n%d\t %ld %ld\n", i, fibonacci(i), recursive_fibonacci(i));
    }

    return 0;
}

/*  You could separate writing it iteratively from writing recusively and see
    that you'd readily get 45, 50 until you get a number too big for the 
    accuracy of long integer.

    On the iterative side it'd run very quickly because it's a simples iteration
    and its just a linear time set of additions in that sequence.

    On the other hand, calling it recursively means that, we're going to ultimately
    wnd up with a bunch of ones or zeros being added. When you've over a billion 
    function calls, you have a whole bunch of operations going on and that actually 
    take some significant time in relation to the simple calculation you're doing.

    So that's a pitfall. If you use recursion, it could lead to a significant slower.
    Even though on the surface, it gives you a more logical easier to understand 
    program for recursive functions.
*/