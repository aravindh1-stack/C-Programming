#include <stdio.h>
int main() {
    int val = 20;
    int *ptr = &val;
    printf("Value: %d\n", val);
    printf("Address: %p\n", ptr);
    printf("Value via Pointer: %d", *ptr);
    return 0;
}