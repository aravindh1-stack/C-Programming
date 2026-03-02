#include <stdio.h>

int main(void) {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("%s\n", (marks >= 40) ? "Pass" : "Fail");

    return 0;
}
