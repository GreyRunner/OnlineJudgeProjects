#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
    long i = 0, j = 0;
    long temp;
    long n = 0;
    long a[1000000];
    long result = 0;

    scanf("%ld", &n);
    for (i = 0; i < n; i++) {
        scanf("%ld", &a[i]);
    }

    sort(a, a + n);

    for (i = 1; i < n; i++) {
        while (a[i] <= a[i - 1]) {
            a[i]++;
            result++;
        }
    }

    printf("%ld", result);

    return 0;
}