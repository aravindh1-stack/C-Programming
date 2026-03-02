/* Problem Statement: Write a program to check whether a number is positive, negative, or zero. */
/* Explanation: Uses if-else-if to test n > 0, n < 0, and the remaining zero case. */

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Positive\n");
    } else if (n < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}
