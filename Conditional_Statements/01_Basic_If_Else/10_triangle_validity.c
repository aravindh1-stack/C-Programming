#include <stdio.h>

int main(void) {
    int a1, a2, a3;

    printf("Enter three angles: ");
    scanf("%d %d %d", &a1, &a2, &a3);

    if (a1 > 0 && a2 > 0 && a3 > 0 && (a1 + a2 + a3) == 180) {
        printf("Valid triangle\n");
    } else {
        printf("Invalid triangle\n");
    }

    return 0;
}
