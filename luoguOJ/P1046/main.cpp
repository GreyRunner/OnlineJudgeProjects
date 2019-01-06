#include <iostream>
#include <stdio.h>

int main() {
    int altitudes[100] = {0};
    int taoTao = 0, count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &altitudes[i]);
    }
    scanf("%d", &taoTao);
    taoTao += 30;
    for (int i = 0; i < 10; i++) {
        if (altitudes[i] <= taoTao) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}