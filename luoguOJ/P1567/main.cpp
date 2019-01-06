#include <iostream>
#include <stdio.h>

int main() {
    int N = 0;
    int count = 1, maxCount = 0;
    int previous = 0, now = 0;

    scanf("%d ", &N);
    scanf(" %d ", &previous);
    N--;
    while(N--) {
        scanf("%d", &now);
        if (now > previous) {
            count++;
        } else {
            if (maxCount < count) {
                maxCount = count;
            }
            count = 1;
        }
        previous = now;
    }
    if (maxCount < count) {
        maxCount = count;
    }
    printf("%d ", maxCount);

    return 0;
}