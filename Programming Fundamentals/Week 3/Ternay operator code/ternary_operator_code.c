/* Ternary operator and flow of control
by Isabel Lacerda
Nov. 15, 2021 */

#include <stdio.h>

int main (){
    int speed;
    printf("Enter your speed as an integer: ");
    scanf("%d", &speed);
    speed = (speed < 0) ? (-1) : (speed <= 65) ? (65) : (speed <= 70) ? (70) : (90);
    switch (speed) {
        case 65: printf("\nNo speeding Ticket\n\n");break;
        case 70: printf("\nSpeeding Ticket\n\n");break;
        case 90: printf("\nExpensive Speeding Ticket\n\n");break;
        case -1: printf("\nIncorrect speed\n\n");break;
    }
    return 0;
}

/* Example about switch
switch (i) {
    case 1: a = 2 * i;break;
    case 2: a = 3 * i;break;
    default: a = 4 * i;
} 
*/