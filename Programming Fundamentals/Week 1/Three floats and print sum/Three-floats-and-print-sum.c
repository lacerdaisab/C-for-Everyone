/* Read in three floats and print sum
by Isabel Lacerda
Nov. 12, 2021 */

#include <stdio.h>

int main () {
    float a, b, c, sum;
    printf("Input three numbers:");
    scanf("%f%f%f", &a, &b, &c);
    printf("a = %f, b = %f, c= %f\n", a, b, c);
    sum = a + b + c;
    printf("sum = %f\n\n", sum);
    return 0;
}
