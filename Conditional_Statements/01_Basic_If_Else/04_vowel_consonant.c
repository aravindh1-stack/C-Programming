/* Problem Statement: Write a program to check whether an alphabet character is a vowel or consonant. */
/* Explanation: Uses if-else to compare the character against vowel letters. */

#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}
