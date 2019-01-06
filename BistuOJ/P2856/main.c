#include <stdio.h>

int main() {
    double a = 0, xn = 0;
    int i;

    scanf("%lf", &a);

    xn = a / 2;
    for (i = 0; i <= 1000; i++) {
        xn = 0.5 * (xn + a / xn);
    }
    printf("%.5lf\n", xn);

    return 0;
}