/* Problem Statement: Write a program to apply 5% discount if purchase amount is at least 2000 using ternary operator. */
/* Explanation: Uses ternary to compute final amount either with discount or without discount. */

#include <stdio.h>

int main(void) {
    float amount, finalAmount;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    finalAmount = (amount >= 2000.0f) ? amount - (amount * 0.05f) : amount;
    printf("Final amount: %.2f\n", finalAmount);

    return 0;
}
