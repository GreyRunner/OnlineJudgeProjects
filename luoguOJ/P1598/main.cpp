#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
    char string[1000] = {'\0'};
    int i = 0, j = 0;
    int max = 0;
    int counts[1000] = {0};

    for (i = 0; i < 4; i++) {
        gets(string);
        for (j = 0; j < strlen(string); j++) {
            counts[string[j]]++;
        }
    }
    for (i = 0; i < 26; i++) {
        if (counts['A' + i] > max) {
            max = counts['A' + i];
        }
    }
    for (i = max; i > 0; i--) {
        for (j = 0; j < 26; j++) {
            if (counts['A' + j] == i) {
                printf("*");
                counts['A' + j]--;
            } else {
                printf(" ");
            }
            if (j != 25) {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 0; i < 26; i++) {
        printf("%c ", 'A' + i);
    }
    printf("\n");

    return 0;
}