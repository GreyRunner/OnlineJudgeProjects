#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int i;
    char string[10000];

    scanf("%d", &n);
    scanf("%s", string);
    for (i = 0; i < strlen(string); i++) {
        printf("%c", (string[i] - 'a' + n) % 26 + 'a');
    }

    return 0;
}