#include <iostream>
#include <stdio.h>
#include <string.h>

int useStick(int n);

int numbers[10]{6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main() {
    int i = 0, j = 0;
    int A = 0, B = 0, C = 0;
    int n = 0, now = 0;
    int count;

    scanf("%d", &n);
    n -= 4;
    for (i = 0; i <= 1111; i++) {
        for (j = 0; j <= 1111; j++) {
            A = i;
            B = j;
            C = i + j;
            now = useStick(A) + useStick(B) + useStick(C);
            if (now == n) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}

int useStick(int n) {
    int result = 0;

    if (n == 0) {
        return numbers[0];
    } else {
        while (n != 0) {
            result += numbers[n % 10];
            n /= 10;
        }
    }

    return result;
}