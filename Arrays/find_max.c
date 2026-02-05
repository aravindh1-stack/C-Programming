#include <stdio.h>
int main() {
    int arr[] = {12, 45, 2, 67, 34}, max = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) max = arr[i];
    }
    printf("Largest Element in Array: %d", max);
    return 0;
}