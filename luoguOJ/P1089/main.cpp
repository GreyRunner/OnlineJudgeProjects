#include <iostream>
#include <stdio.h>

int main() {
    double saveMoney = 0, use = 0;
    int nowMoney = 0;
    int i = 0;

    for (i = 1; i <= 12; i++) {
        nowMoney += 300;
        scanf("%lf", &use);
        nowMoney -= use;
        if (nowMoney < 0) {
            printf("-%d\n", i);
            return 0;
        }
        saveMoney += nowMoney / 100 * 100;
        nowMoney %= 100;
    }
    printf("%.0lf\n", (double)nowMoney + saveMoney * 1.2);

    return 0;
}