/* Problem Statement: Write a program to check whether a year is a leap year using nested if. */
/* Explanation: Uses nested if for 400, 100, and 4 divisibility leap-year rules. */

#include <stdio.h>

int main(void) {
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("Leap year\n");
    } else {
        if (year % 100 == 0) {
            printf("Not a leap year\n");
        } else {
            if (year % 4 == 0) {
                printf("Leap year\n");
            } else {
                printf("Not a leap year\n");
            }
        }
    }

    return 0;
}
