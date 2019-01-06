#include <iostream>
#include <stdio.h>
#include <math.h>

int isPrime(long number);
void dfs(int i, int addCount, long sum);

int n = 0, k = 0;
long numbers[1000] = {0};
int count = 0;

int main() {

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%ld", &numbers[i]);
    }
    dfs(0, 0, 0);
    printf("%d\n", count);

    return 0;
}

void dfs(int i, int addCount, long sum) {

    if (addCount == k) {
        if (isPrime(sum)) {
            count++;
            return;
        }
    } else if (i == n) {
        return;
    } else {
        for (; i < n; i++) {
            dfs(i + 1, addCount + 1, sum + numbers[i]);
        }
    }


    return;
}

int isPrime(long number) {
    for (int i = 2; i < sqrt(number); i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}