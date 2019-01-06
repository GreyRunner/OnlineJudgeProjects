#include <iostream>
#include <stdio.h>

int main() {
    int a, b, c, d;
    int e, f;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (d < b) {
        c--;
        f = d + 60 - b;
    } else {
        f = d - b;
    }
    e = c - a;
    printf("%d %d\n", e, f);

    return 0;
}