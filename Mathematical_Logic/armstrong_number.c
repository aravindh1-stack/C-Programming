#include <stdio.h>
int main() {
    int n = 153, r, sum = 0, temp = n;
    while(n > 0) {
        r = n % 10;
        sum += (r * r * r);
        n /= 10;
    }
    if(temp == sum) printf("%d is an Armstrong Number", temp);
    else printf("%d is not an Armstrong Number", temp);
    return 0;
}