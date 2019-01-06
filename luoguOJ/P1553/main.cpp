#include <iostream>
#include <stdio.h>
#include <string.h>

void printNumber(char number[1000], int length);
void printDecimal(char number[1000], int length);

int main() {
    char s[1000] = {'\0'};
    char number[1000] = {'\0'};
    char identifier = '\0';
    int i = 0, j = 0;

    scanf("%s", s);
    for (i = 0; i < strlen(s); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            number[j++] = s[i];
        } else {
            identifier = s[i];
            if (identifier == '.' || identifier == '/') {
                printNumber(number, j);
                printf("%c", s[i]);
                j = 0;
                memset(number, 0, sizeof(number));
            }
        }
    }
    switch (identifier) {
        case '%':
            printNumber(number, j);
            printf("%c", identifier);
            break;
        case '.':
            printDecimal(number, j);
            break;
        default:
            printNumber(number, j);
            break;
    }

    return 0;
}

void printNumber(char number[1000], int length) {
    int i = 0;
    for (i = length - 1; i >= 0 && number[i] == '0'; i--);
    if (i < 0) {
        printf("0");
    } else {
        for (; i >= 0; i--) {
            printf("%c", number[i]);
        }
    }
}

void printDecimal(char number[1000], int length) {
    int i = 0;
    int j = 0;

    for (j = 0; j < length && number[j] == '0'; j++);
    if (j == length) {
        printf("0");
    } else {
        for (i = length - 1; i > j - 1; i--) {
            printf("%c", number[i]);
        }
    }
}
