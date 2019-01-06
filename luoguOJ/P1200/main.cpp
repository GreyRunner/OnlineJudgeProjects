#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
    char cometName[100] = {'\0'}, teamName[100] = {'\0'};
    long cometValue = 1, teamValue = 1;

    scanf("%s %s", cometName, teamName);
    for (int i = 0; i < strlen(cometName); i++) {
        cometValue *= cometName[i] - 'A' + 1;
    }
    for (int i = 0; i < strlen(teamName); i++) {
        teamValue *= teamName[i] - 'A' + 1;
    }
    if (cometValue % 47 == teamValue % 47) {
        printf("GO\n");
    } else {
        printf("STAY\n");
    }

    return 0;
}