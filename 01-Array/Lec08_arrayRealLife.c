//
// Created by folks on 3/20/2024.
//

#include <stdio.h>

int main(void) {
    int tempArray[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &tempArray[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Data : %d\n", tempArray[i]);
    }
}
