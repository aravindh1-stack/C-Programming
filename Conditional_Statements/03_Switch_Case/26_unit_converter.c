#include <stdio.h>

int main(void) {
    int choice;
    float km;

    printf("1. Kilometers to Meters\n2. Kilometers to Centimeters\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    switch (choice) {
        case 1:
            printf("%.2f km = %.2f m\n", km, km * 1000.0f);
            break;
        case 2:
            printf("%.2f km = %.2f cm\n", km, km * 100000.0f);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
