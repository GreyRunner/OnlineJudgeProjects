#include <iostream>
#include <stdio.h>

int main() {
    int maxUnhappy = 0, maxDay = 0;
    int schoolHour, otherHour;
    int i;

    for (i = 1; i <=7; i++) {
        scanf("%d %d", &schoolHour, &otherHour);
        if (schoolHour + otherHour - 8 > maxUnhappy) {
            maxUnhappy = schoolHour + otherHour - 8;
            maxDay = i;
        }
    }
    printf("%d\n", maxDay);

    return 0;
}