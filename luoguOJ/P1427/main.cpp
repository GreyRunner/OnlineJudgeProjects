#include <iostream>
#include <stdio.h>

int main() {
    int i = 0;
    int numbers[1000000] = {0};
    int number = 0;

    while(1) {
        scanf(" %d", &number);
        if (number == 0) {
            break;
        }
        numbers[i] = number;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", numbers[j]);
    }
    printf("\n");

    return 0;
}