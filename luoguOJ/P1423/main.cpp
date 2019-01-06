#include <iostream>
#include <stdio.h>

int main() {
    double swim = 2;
    double finishLine = 0, S = 0;
    int step = 0;

    scanf("%lf", &finishLine);
    while (S <= finishLine) {
        S += swim;
        step++;
        swim *= 0.98;
    }

    printf("%d\n", step);

    return 0;
}