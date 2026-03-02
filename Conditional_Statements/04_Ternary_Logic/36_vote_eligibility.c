#include <stdio.h>

int main(void) {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("%s\n", (age >= 18) ? "Eligible to vote" : "Not eligible to vote");

    return 0;
}
