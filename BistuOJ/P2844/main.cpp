#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double x, y;

    cin >> x;
    if (x < 3) {
        y = x + 5;
    } else if (x == 3) {
        y = 2 * x;
    } else if (x > 3 && x < 10) {
        y = 6 * x - 4;
    } else {
        y = 3 * x - 11;
    }
    printf("x=%.3lf,y=%.3lf\n", x, y);

    return 0;
}