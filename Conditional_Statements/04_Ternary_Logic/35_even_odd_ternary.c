#include <stdio.h>

int main(void) {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%s\n", (n % 2 == 0) ? "Even" : "Odd");

    return 0;
}
