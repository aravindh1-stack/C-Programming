#include <stdio.h>
#include <string.h>
int main() {
    char s[] = "madam", rev[20];
    strcpy(rev, s);
    strrev(rev); // Note: strrev is common in many compilers
    if(strcmp(s, rev) == 0) printf("%s is a Palindrome", s);
    else printf("%s is not a Palindrome", s);
    return 0;
}