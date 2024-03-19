#include <stdio.h>

int main(void) {
    int a[5] = {1,2,3,4,5};
    int sum = 0;
    for (int i = 0 ; i < 5 ; i++) { 
        sum += a[i];
    }

    int total = sum / 5;
    printf("%d\n", total);
}