/* Problem Statement: Write a program to find minimum and maximum between two numbers using ternary operators. */
/* Explanation: Uses ternary expressions to assign min and max based on comparison. */

#include <stdio.h>

int main(void) {
    int a, b, min, max;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    min = (a < b) ? a : b;
    max = (a > b) ? a : b;

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
