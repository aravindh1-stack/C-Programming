/* Problem Statement: Write a program to check whether a character is a vowel using switch-case. */
/* Explanation: Uses switch cases for all vowel letters in both lowercase and uppercase. */

#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant (or not a vowel)\n");
    }

    return 0;
}
