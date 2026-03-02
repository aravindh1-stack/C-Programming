/* Problem Statement: Write a program to assign grades A, B, C, D, or F based on marks. */
/* Explanation: Uses nested if to first validate range, then apply grade slabs. */

#include <stdio.h>

int main(void) {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 100) {
        if (marks >= 90) {
            printf("Grade A\n");
        } else if (marks >= 75) {
            printf("Grade B\n");
        } else if (marks >= 60) {
            printf("Grade C\n");
        } else if (marks >= 40) {
            printf("Grade D\n");
        } else {
            printf("Grade F\n");
        }
    } else {
        printf("Invalid marks\n");
    }

    return 0;
}
