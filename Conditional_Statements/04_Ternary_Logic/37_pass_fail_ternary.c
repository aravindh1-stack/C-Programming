/* Problem Statement: Write a program to print pass or fail status with pass marks 40 using ternary operator. */
/* Explanation: Uses ternary expression to compare marks against pass cutoff. */

#include <stdio.h>

int main(void) {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("%s\n", (marks >= 40) ? "Pass" : "Fail");

    return 0;
}
