#include <iostream>
#include <stdio.h>

int main() {
    int fishes[10000] = {0};
    int counts[10000] = {0};
    int n = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &fishes[i]);
        for (int j = 0; j < i; j++) {
            if (fishes[j] < fishes[i]) {
                counts[i]++;
            }
        }
        printf("%d ", counts[i]);
    }


    return 0;
}