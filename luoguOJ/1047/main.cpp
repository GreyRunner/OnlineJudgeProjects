#include <iostream>
#include <stdio.h>
#include <string.h>

int main() {
    int L = 0, M = 0;
    int start = 0, end = 0;
    int trees[100000] = {0};
    int count = 0;

    memset(trees, 1, sizeof(trees));
    scanf("%d %d", &L, &M);
    for (int i = 0; i < M; i++) {
        scanf(" %d %d", &start, &end);
        for (int j = start; j <= end; j++) {
            if (trees[j]) {
                trees[j] = 0;
            }
        }
    }
    for (int i = 0; i <= L; i++) {
        if (trees[i]) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}