#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double x = 0, y = 0;

    cin >> x;
    if (x < 1) {
        y = x * x;
    } else if (x >= 1 && x < 10) {
        y = 5 * x - 1;
    } else {
        y = 2 * x + 4;
    }
    printf("x=%.2lf,y=%.2lf", x, y);

    return 0;
}