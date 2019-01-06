#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
    int a = 0, b = 0, achieve = 0;
    int n = 0, s = 0;
    int i = 0;
    int haveApple = 1;
    int best = -1, minY = -1;
    int x[10000], y[10000];
    int result = 0;

    scanf("%d %d", &n, &s);
    scanf("%d %d", &a, &b);
    achieve = a + b;
    for (i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
        if (x[i] > achieve) {
            x[i] = -1;
        }
    }
    while (haveApple) {
        haveApple = 0;
        minY = -1;
        for (i = 0; i < n; i++) {
            if (x[i] != -1 && s >= y[i]) {
                if (minY == -1 || minY > y[i]) {
                    minY = y[i];
                    haveApple = 1;
                    best = i;
                }
            }
        }
        if (haveApple) {
            result++;
            s -= y[best];
            x[best] = -1;
        }
    }
    printf("%d\n", result);

    return 0;
}