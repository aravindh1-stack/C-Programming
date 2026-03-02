#include <stdio.h>

int main(void) {
    int n, absValue;

    printf("Enter an integer: ");
    scanf("%d", &n);

    absValue = (n >= 0) ? n : -n;
    printf("Absolute value: %d\n", absValue);

    return 0;
}
