#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    int n = sizeof(a)/sizeof(a[0]);
    for (int i = 0 ; i < n ; i++) {
        sum += a[i];
    }
    printf("Sum of array elements: %d\n", sum);
}