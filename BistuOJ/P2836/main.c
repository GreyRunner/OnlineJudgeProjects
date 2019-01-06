#include <stdio.h>


int main() {
    int number1, number2;

    while (scanf("%d %d", &number1, &number2) != EOF) {
        if (number1 == 0 && number2 == 0) {
            break;
        }
        printf("%d\n", number1 - number2);
    }

    return 0;
}