#include <stdio.h>

int main() {
    int i = 0, n = 0;
    int sum = 0;
    scanf("%d", &n);
    for (i = 0; i <= n; i+=2){
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}