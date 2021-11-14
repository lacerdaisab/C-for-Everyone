/* Logical operators and short circuit evaluation
by Isabel Lacerda
Nov. 14, 2021 */

#include <stdio.h>

int main () {
    int weather, outside;
    printf("Enter if outside true 1 or false 0: ");
    scanf("%d", &outside);
    printf("Enter if rain true 1 or false 0: ");
    scanf("%d", &weather);
        if(weather && outside) {
            printf("\nPlease, use an umbrella.\n\n");
        } else (printf("\nDress normally.\n\n"));
    return 0;
}