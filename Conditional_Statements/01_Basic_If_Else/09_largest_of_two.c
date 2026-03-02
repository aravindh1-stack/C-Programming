/* Problem Statement: Write a program to find the larger number between two integers. */
/* Explanation: Uses if-else to compare two numbers directly. */

#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Largest: %d\n", a);
    } else if (b > a) {
        printf("Largest: %d\n", b);
    } else {
        printf("Both are equal\n");
    }

    return 0;
}
