#include <stdio.h>
float calculateArea(float radius) {
    return 3.14 * radius * radius;
}
int main() {
    float r = 5.0;
    printf("Area of Circle with radius %.2f is %.2f", r, calculateArea(r));
    return 0;
}