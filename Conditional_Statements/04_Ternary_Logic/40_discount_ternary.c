#include <stdio.h>

int main(void) {
    float amount, finalAmount;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    finalAmount = (amount >= 2000.0f) ? amount - (amount * 0.05f) : amount;
    printf("Final amount: %.2f\n", finalAmount);

    return 0;
}
