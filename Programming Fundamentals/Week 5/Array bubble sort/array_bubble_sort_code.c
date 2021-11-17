/*  Use of simple arrays as parameters
    Sorting Bubble Sort
    Display each loop
    Easy but inefficient
    by Isabel Lacerda
    Nov. 17, 2021 
*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int howMany, int data[], char *str) {
    int i;
    printf("%s", str);

    for (i = 0; i < howMany; i++) {
        printf("%d\t", data[i]);
    }
}

void bubble(int data[], int howMany) {
    int i, j;
    int goOn;

    for (i = 0; i < howMany; i++) {
        printArray(howMany, data, "\ninside bubble\n");
        printf("i = %d, input any int to continue:", i);
        scanf("%d", &goOn);
        
        for (j = howMany - 1; j > i; j--) {
            if (data[j-i] > data[j]) {
                swap(&data[j-1], &data[j]);
            }  
        }
    }
}

int main () {
    const int SIZE = 5;
    int grades[] = {71, 68, 70, 100, 95};

    printArray(SIZE, grades, "My grades\n");
    printf("\n\n");
    bubble(grades, SIZE);

    printArray(SIZE, grades, "My sorted grades\n");
    printf("\n\n");
    return 0;
}