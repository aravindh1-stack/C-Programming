#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%s\n", (n > 0) ? "Positive" : (n < 0) ? "Negative" : "Zero");

    return 0;
}
