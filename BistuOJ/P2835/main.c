#include <stdio.h>


int main() {
    int number1, number2, n;

    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &number1, &number2);
        if (number1 == 0 && number2 == 0) {
            break;
        }
        printf("%d\n", number1 - number2);
    }

    return 0;
}