/*  Sorting Merge Sort
    O(n log n) efficient
    by Isabel Lacerda
    Nov. 18, 2021 
*/

#include <stdio.h>

void printArray(int howMany, int data[], char *str) {
    int i;
    printf("%s", str);

    for (i = 0; i < howMany; i++) {
        printf("%d\t", data[i]);
    }
}

void merge(int a[], int b[], int c[], int howMany) {//a and b same size
    int i = 0, j= 0, k = 0;
    while (i < howMany && j < howMany) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } 
        else {
            c[k++] = b[j++];
        }
    }
    while (i < howMany) {
        c[k++] = a[i++];
    }
    while (j < howMany) {
        c[k++] = b[j++];
    }
}

int main() {
    const int SIZE = 5;
    int a[] = {67, 82, 83, 88, 99};
    int b[] = {58, 69, 72, 81, 88};
    int c[10];
    printArray(SIZE, a, "My grades\n");
    printf("\n\n");
    printArray(SIZE, b, "More grades\n");
    printf("\n\n");
    merge(a, b, c, SIZE);
    printArray(2*SIZE, c, "My sorted grates\n");
    printf("\n\n");
    return 0;
}