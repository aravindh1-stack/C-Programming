/* Problem Statement: Write a program to print three numbers in ascending order using nested if. */
/* Explanation: Uses nested if branches to decide the exact ordering of a, b, and c. */

#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b) {
        if (b <= c) {
            printf("Ascending: %d %d %d\n", a, b, c);
        } else if (a <= c) {
            printf("Ascending: %d %d %d\n", a, c, b);
        } else {
            printf("Ascending: %d %d %d\n", c, a, b);
        }
    } else {
        if (a <= c) {
            printf("Ascending: %d %d %d\n", b, a, c);
        } else if (b <= c) {
            printf("Ascending: %d %d %d\n", b, c, a);
        } else {
            printf("Ascending: %d %d %d\n", c, b, a);
        }
    }

    return 0;
}
