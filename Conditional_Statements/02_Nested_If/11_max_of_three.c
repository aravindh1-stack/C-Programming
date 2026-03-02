#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b) {
        if (a >= c) {
            printf("Greatest: %d\n", a);
        } else {
            printf("Greatest: %d\n", c);
        }
    } else {
        if (b >= c) {
            printf("Greatest: %d\n", b);
        } else {
            printf("Greatest: %d\n", c);
        }
    }

    return 0;
}
