#include <stdio.h>
int main() {
    int n, i = 1, f = 1;
    scanf("%d", &n);
    while (i <= n) {
        f *= i;
        i++;
    }
    printf("Factorial: %d", f);
    return 0;
}