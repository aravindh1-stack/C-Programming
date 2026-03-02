/* Problem Statement: Write a program to check voting eligibility (18+) using ternary operator. */
/* Explanation: Uses ternary to choose eligible or not eligible message by age threshold. */

#include <stdio.h>

int main(void) {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("%s\n", (age >= 18) ? "Eligible to vote" : "Not eligible to vote");

    return 0;
}
