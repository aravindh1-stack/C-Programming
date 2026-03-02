/* Problem Statement: Write a menu-driven calculator to perform addition, subtraction, multiplication, or division using switch-case. */
/* Explanation: Uses switch on user choice to execute one arithmetic operation. */

#include <stdio.h>

int main(void) {
    int choice;
    float a, b;

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case 1:
            printf("Result: %.2f\n", a + b);
            break;
        case 2:
            printf("Result: %.2f\n", a - b);
            break;
        case 3:
            printf("Result: %.2f\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Result: %.2f\n", a / b);
            } else {
                printf("Division by zero is not allowed\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
