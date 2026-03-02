/* Problem Statement: Write a program to calculate whether a transaction results in profit, loss, or no gain-no loss. */
/* Explanation: Uses nested if after validating non-negative cost and selling prices. */

#include <stdio.h>

int main(void) {
    float costPrice, sellingPrice;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (costPrice >= 0 && sellingPrice >= 0) {
        if (sellingPrice > costPrice) {
            printf("Profit: %.2f\n", sellingPrice - costPrice);
        } else if (sellingPrice < costPrice) {
            printf("Loss: %.2f\n", costPrice - sellingPrice);
        } else {
            printf("No profit, no loss\n");
        }
    } else {
        printf("Prices cannot be negative\n");
    }

    return 0;
}
