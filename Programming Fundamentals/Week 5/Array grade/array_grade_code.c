/* Use of simple arrays
by Isabel Lacerda
Nov. 17, 2021 */

#include <stdio.h> 

int main () {
    const size = 5;
    int grades[] = {70, 68, 95, 71, 100};
    double sum = 0.0; 
    int i;

    printf("\n My grades are: \n\n");
    
    for (i = 0; i < size; i++) {
        printf(" %d", grades[i]);
    }
    
    for (i = 0; i < size; i++) {
        sum += grades[i];
    }
    printf("\n\n");
    printf("\n My average grade is %.2f\n", sum/size);

    return 0;
}