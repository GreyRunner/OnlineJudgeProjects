#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
    int counts[10000];
    int n;
    int i, j;
    counts[0] = 1;
    counts[1] = 1;

    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        if (i % 2 == 1) {
            counts[i] = counts[i - 1];
        } else {
            counts[i] = counts[i - 1] + counts[i / 2];
        }
    }

    printf("%d\n", counts[n]);

    return 0;
}