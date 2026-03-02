/* Problem Statement: Write a program to give a bonus of 1000 if salary is at least 30000, otherwise 500. */
/* Explanation: Uses ternary operator to choose bonus amount from a salary condition. */

#include <stdio.h>

int main(void) {
    float salary, bonus;

    printf("Enter salary: ");
    scanf("%f", &salary);

    bonus = (salary >= 30000.0f) ? 1000.0f : 500.0f;
    printf("Bonus: %.2f\n", bonus);

    return 0;
}
