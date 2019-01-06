#include <iostream>
#include <stdio.h>

int main() {
    int n = 0, x = 0;
    int number = 0;
    int count = 0;

    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++) {
        number = i;
        while (number > 0) {
            if (number % 10 == x) {
                count++;
            }
            number /= 10;
        }
    }

    printf("%d\n", count);

    return 0;
}