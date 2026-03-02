/* Problem Statement: Write a program to check whether a character is uppercase or lowercase. */
/* Explanation: Uses ASCII range checks with if-else-if for uppercase and lowercase letters. */

#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase letter\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase letter\n");
    } else {
        printf("Not an alphabet letter\n");
    }

    return 0;
}
