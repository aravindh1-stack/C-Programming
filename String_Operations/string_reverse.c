#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "GitHub";
    int len = strlen(str);
    printf("Original: %s | Reversed: ", str);
    for(int i = len - 1; i >= 0; i--) printf("%c", str[i]);
    return 0;
}