#include <stdio.h>
int main() {
    int n = 7, count = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) count++;
    }
    if(count == 2) printf("%d is a Prime Number", n);
    else printf("%d is not a Prime Number", n);
    return 0;
}