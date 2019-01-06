#include <iostream>
#include <stdio.h>

int main() {
    int n = 0;
    int numbers[100000] = {0};
    int i = 0, j = 0, k = 0;
    int flag = 0;
    int count = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %d", &numbers[i]);
    }
    for (i = 0; i < n; i++) {
        flag = 0;
        for (j = 0; j < n; j++) {
            if (flag) {
                break;
            }
            if (j == i) {
                continue;
            }
            for (k = 0; k < n; k++) {
                if (flag) {
                    break;
                }
                if (k == i || k == j) {
                    continue;
                }
                if (numbers[j] + numbers[k] == numbers[i]) {
                    flag = 1;
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}