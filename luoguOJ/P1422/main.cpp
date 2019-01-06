#include <iostream>
#include <stdio.h>

int main() {
    int use;
    double result;

    scanf("%d", &use);
    if (use <= 150) {
        result = use * 0.4463;
    } else if(use <=400) {
        result = 0.4463 * 150 + (use - 150) * 0.4663;
    } else {
        result = 0.4463 * 150 + 250 * 0.4663 + (use - 400) * 0.5663;
    }
    printf("%.1lf", result);

    return 0;
}