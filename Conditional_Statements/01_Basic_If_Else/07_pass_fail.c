/* Problem Statement: Write a program to check pass or fail status for marks out of 100 with pass mark 40. */
/* Explanation: Uses if-else to compare marks against a fixed pass threshold. */

#include <stdio.h>

int main(void) {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
