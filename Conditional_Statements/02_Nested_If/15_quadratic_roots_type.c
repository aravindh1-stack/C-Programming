/* Problem Statement: Write a program to determine if quadratic roots are real-equal, real-distinct, or imaginary. */
/* Explanation: Uses nested if on discriminant value d = b*b - 4ac. */

#include <stdio.h>

int main(void) {
    int a, b, c;
    int d;

    printf("Enter coefficients a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a != 0) {
        d = b * b - 4 * a * c;

        if (d > 0) {
            printf("Real and distinct roots\n");
        } else if (d == 0) {
            printf("Real and equal roots\n");
        } else {
            printf("Imaginary roots\n");
        }
    } else {
        printf("Not a quadratic equation\n");
    }

    return 0;
}
