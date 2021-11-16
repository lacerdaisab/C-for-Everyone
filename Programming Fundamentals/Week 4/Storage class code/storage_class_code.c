/* Storage class code - not useful code
by Isabel Lacerda
Nov. 16, 2021 */

#include <stdio.h>

extern int reps = 0; //extern means that an item exist throughout 
//                     the execution of the code and is available in any of the functions.
 

void f () {
    static int called = 0; //static means that it's a local variable and every time it's called after that, 
    //                       that value is gonna be whatever its last exited value is.
    printf("f called %d\n", called);
    called++;
    reps = reps + called;
}

int main () {
    auto int i = 1; //auto means that it's automatic, and automatic means on entry to main.
    const int limit = 10; //const means that the initial value is to remain that value throughout, it can't be changed.
    for (i = 1; i < limit; i++){
        printf("i local = %d, reps global = %d\n", i, reps);
        f();
    }
    return 0;
}