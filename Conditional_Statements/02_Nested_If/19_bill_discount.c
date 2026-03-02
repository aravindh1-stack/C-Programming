#include <stdio.h>

int main(void) {
    float amount, finalAmount;
    int isMember;

    printf("Enter bill amount: ");
    scanf("%f", &amount);

    printf("Is customer a member? (1 for Yes, 0 for No): ");
    scanf("%d", &isMember);

    if (amount >= 1000) {
        if (isMember == 1) {
            finalAmount = amount - (amount * 0.10f);
            printf("Discount applied. Final amount: %.2f\n", finalAmount);
        } else {
            printf("No discount. Final amount: %.2f\n", amount);
        }
    } else {
        printf("No discount. Final amount: %.2f\n", amount);
    }

    return 0;
}
