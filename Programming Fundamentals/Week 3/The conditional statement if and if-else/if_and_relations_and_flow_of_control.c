/* If and relations and flow of control
by Isabel Lacerda
Nov. 14, 2021 */

#include <stdio.h>

int main (){
    int speed;

    printf("\nEnter your speed as an integer: ");
    scanf("%d", &speed);
        if(speed < 65)
            printf("\nNo speeding Ticket.\n\n");
        else printf("\nSpeeding Ticket.\n\n");
    return 0;
}