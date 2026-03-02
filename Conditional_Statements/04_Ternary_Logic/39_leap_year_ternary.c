#include <stdio.h>

int main(void) {
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    printf("%s\n", ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) ? "Leap year" : "Not a leap year");

    return 0;
}
