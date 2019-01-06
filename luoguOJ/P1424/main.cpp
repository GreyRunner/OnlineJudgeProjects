#include <iostream>
#include <stdio.h>

int main() {
    long x = 0, n = 0;
    long i = 0;
    long long S = 0;

    scanf("%d %d", &x, &n);
    for (i = 0; i < n; i++, x++) {
        if (x % 7 != 0 && x % 7 != 6) {
            S += 250;
        }
    }

    printf("%d", S);

    return 0;
}