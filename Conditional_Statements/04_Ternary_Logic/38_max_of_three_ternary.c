/* Problem Statement: Write a program to find the greatest among three numbers using nested ternary operators. */
/* Explanation: Uses nested ternary comparisons to choose the largest value. */

#include <stdio.h>

int main(void) {
    int a, b, c, max;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Greatest: %d\n", max);

    return 0;
}
