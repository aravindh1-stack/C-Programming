/* Problem Statement: Write a menu-driven program to calculate area of circle, rectangle, or triangle using switch-case. */
/* Explanation: Uses switch on shape choice and applies the corresponding area formula. */

#include <stdio.h>

int main(void) {
    int choice;
    float r, l, w, b, h;

    printf("1. Area of Circle\n2. Area of Rectangle\n3. Area of Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            printf("Area: %.2f\n", 3.14159f * r * r);
            break;
        case 2:
            printf("Enter length and width: ");
            scanf("%f %f", &l, &w);
            printf("Area: %.2f\n", l * w);
            break;
        case 3:
            printf("Enter base and height: ");
            scanf("%f %f", &b, &h);
            printf("Area: %.2f\n", 0.5f * b * h);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
