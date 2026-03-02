/* Problem Statement: Write a program to check whether a number is positive or negative. */
/* Explanation: Uses if-else with n >= 0 as positive and otherwise negative. */

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0) {
        printf("%d is Positive\n", n);
    } else {
        printf("%d is Negative\n", n);
    }

    return 0;
}
