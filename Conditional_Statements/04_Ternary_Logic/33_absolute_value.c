/* Problem Statement: Write a program to find the absolute value of an integer using ternary operator. */
/* Explanation: Uses ternary to keep n if non-negative, otherwise convert to -n. */

#include <stdio.h>

int main(void) {
    int n, absValue;

    printf("Enter an integer: ");
    scanf("%d", &n);

    absValue = (n >= 0) ? n : -n;
    printf("Absolute value: %d\n", absValue);

    return 0;
}
