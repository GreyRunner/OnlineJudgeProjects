#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double real1, real2, real3;
    double max, min;

    cin >> real1 >> real2 >> real3;
    max =real1; min = real1;
    if (max < real2) {
        max = real2;
    }
    if (max < real3) {
        max = real3;
    }
    if (min > real2) {
        min = real2;
    }
    if (min > real3) {
        min = real3;
    }
    printf("%.2lf %.2lf", max, min);

    return 0;
}