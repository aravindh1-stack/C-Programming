/* Problem Statement: Write a program to check whether a given integer is even or odd. */
/* Explanation: Uses if-else with n % 2 == 0 to identify even numbers. */

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is Even\n", n);
    } else {
        printf("%d is Odd\n", n);
    }

    return 0;
}
