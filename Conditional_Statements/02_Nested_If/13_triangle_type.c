#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0) {
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c) {
                printf("Equilateral triangle\n");
            } else if (a == b || b == c || a == c) {
                printf("Isosceles triangle\n");
            } else {
                printf("Scalene triangle\n");
            }
        } else {
            printf("Not a valid triangle\n");
        }
    } else {
        printf("Sides must be positive\n");
    }

    return 0;
}
