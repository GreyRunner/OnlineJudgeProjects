#include <iostream>
#include <stdio.h>
#include <string.h>

void toBeLower(char string[]);
int getAWord();

char key[10000] = {'\0'}, word[10000] = {'\0'};
int countTime = 0, firstAppear = -1, countIndex = 0;
int i = 0, j = 0;

int main() {

    gets(key);
    toBeLower(key);
    for (i = 0; key[i] != '\0';i++) {
        if (!(key[i] >= 'a' && key[i] <= 'z')) {
            key[i] = '\0';
        }
    }

    while (getAWord()) {
        if (strcmp(key, word) == 0) {
            if (firstAppear == -1) {
                firstAppear = countIndex - strlen(key) - 1;
            }
            countTime++;
        }
    }
    if (strcmp(key, word) == 0) {
        if (firstAppear == -1) {
            firstAppear = countIndex - strlen(key);
        }
        countTime++;
    }
    if (firstAppear == -1) {
        printf("%d\n", firstAppear);
    } else {
        printf("%d %d\n", countTime, firstAppear);
    }

    return 0;
}

int getAWord() {
    char c;

    while (c = getchar()) {
        if (c >= 'A' && c <= 'Z') {
            c += 'a' - 'A';
        }
        countIndex++;
        if (c == '\n') {
            word[j] = '\0';
            return 0;
        }
        if (c == ' ') {
            if (j != 0) {
                word[j] = '\0';
                j = 0;
                return 1;
            }
        } else {
            word[j++] = c;
        }
    }
}

void toBeLower(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 'a' - 'A';
        }
    }
}