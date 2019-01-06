#include <stdio.h>


int main() {
    int number1, number2, result;

    while (scanf("%d %d", &number1, &number2) != EOF) {
        printf("%d\n", number1 - number2);
    }

    return 0;
}