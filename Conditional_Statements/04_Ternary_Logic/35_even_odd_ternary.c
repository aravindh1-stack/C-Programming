/* Problem Statement: Write a program to check even or odd using ternary operator. */
/* Explanation: Uses n % 2 condition inside ternary to print Even or Odd. */

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%s\n", (n % 2 == 0) ? "Even" : "Odd");

    return 0;
}
