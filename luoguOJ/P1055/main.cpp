#include <iostream>
#include <stdio.h>

int main() {
    char ISBN[100] = {'\0'};
    int i = 0;
    int multiplier = 0; //乘数
    int product = 0;
    char identifier = '0';

    scanf("%s", ISBN);
    for (i = 0; i < 11; i++) {
        if (ISBN[i] >= '0' && ISBN[i] <= '9') {
            multiplier++;
            product += (ISBN[i] - '0') * multiplier;
        }
    }
    product %= 11;
    if (product == 10) {
        identifier = 'X';
    } else {
        identifier = product + '0';
    }
    if (identifier == ISBN[12]) {
        printf("Right\n");
    } else {
        ISBN[12] = identifier;
        printf("%s\n", ISBN);
    }

    return 0;
}