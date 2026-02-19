#include <stdio.h>
enum Days {SUN, MON, TUE, WED, THU, FRI, SAT};
int main() {
    enum Days today = WED;
    printf("Day index: %d", today); // Will print 3
    return 0;
}