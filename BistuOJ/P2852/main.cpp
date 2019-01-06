#include <stdio.h>

int main() {
    int i = 0, j = 0;
    int n = 0, sum = 0, factorial = 1;

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        sum += factorial;
    }
    printf("sum=%d\n", sum);

    return 0;
}