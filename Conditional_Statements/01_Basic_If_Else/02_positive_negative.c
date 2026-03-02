#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0) {
        printf("%d is Positive\n", n);
    } else {
        printf("%d is Negative\n", n);
    }

    return 0;
}
