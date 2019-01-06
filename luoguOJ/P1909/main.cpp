#include <iostream>
#include <stdio.h>

int main() {
    int need = 0;
    int number = 0, price = 0, package = 0;
    int minPrice = -1;
    int i = 0;

    scanf("%d", &need);
    for (i = 0; i < 3; i++) {
        scanf("%d %d", &number, &price);
        package = need / number;
        if (need % number > 0) {
            package++;
        }
        if (package * price < minPrice || minPrice < 0) {
               minPrice = package * price;
        }
    }
    printf("%d", minPrice);

    return 0;
}