#include <stdio.h>

int main() {
    int n = 0, cout = 0;

    scanf("%d", &n);
    while (cout < 10) {
        if (n % 3 != 0) {
            printf("%4d", n);
            cout++;
        }
        n++;
    }

    return 0;
}