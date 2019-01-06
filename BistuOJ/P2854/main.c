#include <stdio.h>

int main() {
    int i = 0, a = 0, n = 0, sum = 0;
    int now = 0;

    scanf("%d %d", &n, &a);
    now = a;
    for(i = 0; i < n; i++) {
        sum += now;
        now = now * 10 + a;
    }
    printf("s=%d\n", sum);

    return 0;
}