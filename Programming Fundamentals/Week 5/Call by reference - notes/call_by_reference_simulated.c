/* Call by reference
by Isabel Lacerda
Nov. 17, 2021 */

// We use call by reference to "change values" in the calling environment
// Swap(a, b)
// Say a, b are int
// a == 2 b == 5

// what we want is a to become 5 and b to become 2

// void swap(int i, int j) {
//     int temp = i;
//     i = j; j = temp;
// } _ won't work

// the correct way:

// void swap(int*i, int*j) {
//     int temp = *i;
//     *i = *j;
// }


// STEPS:
// 1. declare param as a pointer
// 2. use deferenced pointer in body
// 3. pass in adress swap(&a, &b)
