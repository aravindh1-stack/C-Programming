#include <stdio.h>

int main(void) {
    char color;

    printf("Enter light color (R/Y/G): ");
    scanf(" %c", &color);

    switch (color) {
        case 'R':
        case 'r':
            printf("Stop\n");
            break;
        case 'Y':
        case 'y':
            printf("Get Ready\n");
            break;
        case 'G':
        case 'g':
            printf("Go\n");
            break;
        default:
            printf("Invalid color code\n");
    }

    return 0;
}
