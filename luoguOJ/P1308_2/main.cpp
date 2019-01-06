#include <iostream>
#include <stdio.h>
#include <string.h>

void toBeLower(char string[]);

int main() {
    char key[100000] = {'\0'}, passage[1000000] = {'\0'};
    int count = 0, firstAppear = -1, wordCount = 0;
    int i = 0, j = 0, flag = 0;

    gets(key);
    gets(passage);
    for (i = 0; key[i] != '\0';i++) {
        if (key[i] >= 'A' && key[i] <= 'Z') {
            key[i] += 'a' - 'A';
        }
        if (!(key[i] >= 'a' && key[i] <= 'z')) {
            key[i] = '\0';
        }
    }
    for (i = 0; i < strlen(passage); i++) {
        if (passage[i] >= 'A' && passage[i] <= 'Z') {
            passage[i] += 'a' - 'A';
        }
        if (key[0] == passage[i] && (i == 0 || passage[i - 1] == ' ')) {
            flag = 1;
            for (j = 0; j < strlen(key) && i < strlen(passage); j++, i++) {
                if (passage[i] >= 'A' && passage[i] <= 'Z') {
                    passage[i] += 'a' - 'A';
                }
                if (key[j] != passage[i]) {
                    flag = 0;
                    break;
                }
            }
            if (i == strlen(passage)|| passage[i] != ' ') {
                flag = 0;
            }
            if (flag) {
                if (firstAppear == -1) {
                    firstAppear = i - strlen(key);
                }
                count++;
            }
        }
    }

    if (firstAppear == -1) {
        printf("%d\n", firstAppear);
    } else {
        printf("%d %d\n", count, firstAppear);
    }

    return 0;
}

void toBeLower(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 'a' - 'A';
        }
    }
}