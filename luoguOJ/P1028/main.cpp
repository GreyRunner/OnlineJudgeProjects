#include <iostream>
#include <stdio.h>

void doIt(int n);

int count = 1;

int main() {
    int n;

    scanf("%d", &n);
    doIt(n);
    printf("%d\n", count);

    return 0;
}

void doIt(int n) {
    int i = n / 2;

    for (; i > 0; i--) {
        count++;
        if (i != 1) {
            doIt(i);
        }
    }
}