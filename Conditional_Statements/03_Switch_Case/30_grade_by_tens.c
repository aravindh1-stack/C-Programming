/* Problem Statement: Write a program to print grade using switch-case by converting marks into tens place. */
/* Explanation: Uses switch on marks/10 to assign grade groups efficiently. */

#include <stdio.h>

int main(void) {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks\n");
        return 0;
    }

    switch (marks / 10) {
        case 10:
        case 9:
            printf("Grade A\n");
            break;
        case 8:
            printf("Grade B\n");
            break;
        case 7:
            printf("Grade C\n");
            break;
        case 6:
            printf("Grade D\n");
            break;
        default:
            printf("Grade F\n");
    }

    return 0;
}
