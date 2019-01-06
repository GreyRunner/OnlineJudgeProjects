#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
    long a, b;
    long i, j;
    int l1, l2;

    scanf("%d %d", &a, &b);
    i = a; j = b;
    while (i != 0) {
        i /= 10;
        l1++;
    }
    while (j != 0) {
        j /= 10;
        l2++;
    }


    return 0;
}