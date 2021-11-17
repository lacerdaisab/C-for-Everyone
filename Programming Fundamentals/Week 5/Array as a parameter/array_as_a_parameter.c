/* Use of Simple arrays as parameters
by Isabel Lacerda
Nov. 17, 2021 */

#include <stdio.h>

double averageGrades(int howMany, int grades[]) {
    int i;
    double sum = 0.0;

    for (i = 0; i < howMany; i++) {
        sum += grades[i];
    }
    return(sum/howMany);
}

void printGrades(int howMany, int grades[]) {
    int i;

    printf("I have %d grades\n", howMany);
    for (i = 0; i < howMany; i++) {
        printf("%d\t", grades[i]);
    }
}

int main() {
    const int SIZE = 5;
    int grades[]= {78, 67, 92, 83, 88};

    printGrades(SIZE, grades);
    printf("\n\n");
    printf("my average is %.2f\n\n", averageGrades(SIZE, grades));

    return 0;
}