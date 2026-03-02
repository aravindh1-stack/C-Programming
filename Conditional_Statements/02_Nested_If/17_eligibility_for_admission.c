#include <stdio.h>

int main(void) {
    int math, physics, chemistry;
    int total, mathPhysics;

    printf("Enter marks in Math, Physics, Chemistry: ");
    scanf("%d %d %d", &math, &physics, &chemistry);

    total = math + physics + chemistry;
    mathPhysics = math + physics;

    if (math >= 65 && physics >= 55 && chemistry >= 50) {
        if (total >= 190 || mathPhysics >= 140) {
            printf("Eligible for admission\n");
        } else {
            printf("Not eligible for admission\n");
        }
    } else {
        printf("Not eligible for admission\n");
    }

    return 0;
}
