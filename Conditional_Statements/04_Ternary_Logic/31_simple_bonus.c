#include <stdio.h>

int main(void) {
    float salary, bonus;

    printf("Enter salary: ");
    scanf("%f", &salary);

    bonus = (salary >= 30000.0f) ? 1000.0f : 500.0f;
    printf("Bonus: %.2f\n", bonus);

    return 0;
}
