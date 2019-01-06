#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
    int n = 0;
    int counts[10000] = {0};
    int i = 0, j = 0;

    scanf("%d", &n);
    counts[0] = 1;
    counts[1] = 1;
    for (i = 2; i <= n; i++) {
        counts[i]++;
        for (j = 1; j <= i / 2; j++) {
            counts[i] += counts[j];
        }
    }
    printf("%d\n", counts[n]);

    return 0;
}