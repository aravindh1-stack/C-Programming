/* Problem Statement: Write a program to classify age as child, teenager, adult, or senior citizen. */
/* Explanation: Uses else-if ladder to map age ranges to categories. */

#include <stdio.h>

int main(void) {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 13) {
        printf("Child\n");
    } else if (age < 20) {
        printf("Teenager\n");
    } else if (age < 60) {
        printf("Adult\n");
    } else {
        printf("Senior Citizen\n");
    }

    return 0;
}
