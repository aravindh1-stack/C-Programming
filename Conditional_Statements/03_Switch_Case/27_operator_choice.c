/* Problem Statement: Write a program to perform an operation on two numbers based on an operator character using switch-case. */
/* Explanation: Uses switch on '+', '-', '*', '/', and '%' to execute operator-specific logic. */

#include <stdio.h>

int main(void) {
    int a, b;
    char op;

    printf("Enter expression (e.g., 10 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Result: %d\n", a / b);
            } else {
                printf("Division by zero is not allowed\n");
            }
            break;
        case '%':
            if (b != 0) {
                printf("Result: %d\n", a % b);
            } else {
                printf("Modulo by zero is not allowed\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
