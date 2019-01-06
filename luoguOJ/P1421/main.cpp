#include <iostream>
#include <stdio.h>

int main() {
    int price = 19;
    int a, b;
    int money;

    scanf("%d %d", &a, &b);
    money = a * 10 + b;
    printf("%d", money / price);

    return 0;
}