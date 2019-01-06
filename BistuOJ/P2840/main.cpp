#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
    double p0, rate, n, p;

    cin >> p0 >> rate >> n;

    p = p0 * pow(1 + rate, n);

    printf("%.2lf\n", p);

    return 0;
}