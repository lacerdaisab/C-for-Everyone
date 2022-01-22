/* Enumerated Types 
   by Isabel Lacerda
   Jan. 21, 2022 */

#include <stdio.h>

// The name of enumeration is "flag" and the constant
// are the values of the flag. By default, the values
// of the constants are as follows:
// sun = 0, mon = 1, tue = 2 and 
// so on.

enum day {sun, mon, tue, wed, thu, fri, sat}; //declare type

void print_day (enum day d) {
    switch (d) {
    case sun:
        printf("sunday");
        break;
    case mon:
        printf("monday");
        break;
    case tue:
        printf("tuesday");
        break;
    case wed:
        printf("wednesday");
        break;
    case thu:
        printf("thursday");
        break;
    case fri:
        printf("friday");
        break;
    case sat:
        printf("saturday");
        break;

    default:
        printf("%d is a mistake", d);
        break;
    }
}

enum day next_day(enum day d) {
    return (d +1 % 7); //it turns sat into sun. sat is 6, 6 + 1 % 7 is 0 which is sun.
}

int main () {
    enum day today = fri;
    print_day(today);
    printf("\n\n");
    print_day(7);
    printf("\n\n");
    print_day(next_day(today));
    printf("\n\n");
    return 0;
}