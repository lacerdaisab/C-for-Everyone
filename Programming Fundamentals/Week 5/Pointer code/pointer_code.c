/* Use of pointers
by Isabel Lacerda
Nov. 17, 2021 */

#include <stdio.h> 

int main () {
    const size = 5;
    int grades[] = {70, 68, 95, 71, 100};
    double sum = 0.0; 
    double *prtToSum = &sum; // * isn't times, it's part of the declaration logic
    int i;

    printf("\n My grades are: \n\n");
    
    for (i = 0; i < size; i++) {
        printf("%d\t", grades[i]);
    }
    printf("\n\n");

    for (i = 0; i < size; i++) {
        sum += grades[i];
    }
    printf("\n My average grade is %.2f\n", sum/size);
    printf("\n\n");

    printf(" Sum is at %p, or %lu and is %lf\n", //%p is the format for a pointer address and it's displayed in hexadecimal 
            prtToSum, prtToSum, *prtToSum);
    printf("\n Grades are at %lu to *lu\n", grades, grades + 5);

    return 0;
}

/*  The base type of a pointer affects how it looks at memory.
    Pointer to int and pointer to double are different and this difference
    can affect both how much memory is pointed at - eg. an int
    may be in 4 bytes and a double may be in 8 bytes; and
    interpretation -namely hot the bits are interpreted.  */