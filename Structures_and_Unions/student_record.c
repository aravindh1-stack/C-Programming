#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s1 = {"Arun", 101, 85.5};
    printf("Student: %s\nRoll: %d\nMarks: %.1f", s1.name, s1.roll, s1.marks);
    return 0;
}