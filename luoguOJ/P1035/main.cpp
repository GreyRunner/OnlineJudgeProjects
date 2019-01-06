#include <iostream>
#include <stdio.h>

int main() {
    double Sn = 0;
    int K = 0;
    int i = 0;

    scanf("%d", &K);
    while(Sn <= K) {
        i++;
        Sn += 1.0 / (double)i;
    }
    printf("%d", i);


    return 0;
}