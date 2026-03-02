/* Problem Statement: Write a program to print whether a number is positive, negative, or zero using nested ternary operator. */
/* Explanation: Uses nested ternary to evaluate three possible sign outcomes. */

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%s\n", (n > 0) ? "Positive" : (n < 0) ? "Negative" : "Zero");

    return 0;
}
