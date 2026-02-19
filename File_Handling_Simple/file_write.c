#include <stdio.h>
int main() {
    FILE *fp = fopen("note.txt", "w");
    if(fp == NULL) return 1;
    fprintf(fp, "Hello, this is stored in a file!");
    fclose(fp);
    printf("Data written to file successfully.");
    return 0;
}