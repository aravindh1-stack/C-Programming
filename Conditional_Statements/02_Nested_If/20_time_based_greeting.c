/* Problem Statement: Write a program to print greeting based on hour and whether it is weekend. */
/* Explanation: Uses nested if to split weekday/weekend and then hour ranges. */

#include <stdio.h>

int main(void) {
    int hour, isWeekend;

    printf("Enter hour (0-23): ");
    scanf("%d", &hour);

    printf("Is it weekend? (1 for Yes, 0 for No): ");
    scanf("%d", &isWeekend);

    if (hour >= 0 && hour <= 23) {
        if (isWeekend == 1) {
            if (hour < 12) {
                printf("Relaxing weekend morning!\n");
            } else {
                printf("Enjoy your weekend!\n");
            }
        } else {
            if (hour < 12) {
                printf("Good Morning\n");
            } else if (hour < 18) {
                printf("Good Afternoon\n");
            } else {
                printf("Good Evening\n");
            }
        }
    } else {
        printf("Invalid hour\n");
    }

    return 0;
}
