/*  Sorting: Merge Sort - size is a power of 2
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

void merge(int a[], int b[], int c[], int howMany) { //a and b same size
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

void mergesort(int key[], int howMany) { //a power of 2
    int j, k;
    int w[howMany];

    for (k = 1; k < howMany; k *= 2) {
        for (j=0; j < howMany -k; j += 2 * k) {
            merge(key + j, key + j + k, w + j, k);
        }
        for (j = 0; j < howMany; j++) {
            key[j] = w[j];
        }
        
    }
}

int main() {
    const int SIZE = 8;
    int a[] = {99, 82, 74, 85, 92, 67, 76, 49};
    printArray(SIZE, a, "My grades\n");
    printf("\n\n");
    mergesort(a, SIZE);
    printArray(SIZE, a, "My sorted grates\n");
    printf("\n\n");
    return 0;
}