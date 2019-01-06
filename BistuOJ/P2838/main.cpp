#include <iostream>
#include <cstdio>

#define PI 3.1416

using namespace std;

int main() {
    double radius, perimeter, area;

    cin >> radius;

    perimeter = 2 * radius * PI;
    area = radius * radius * PI;

    printf("%.2lf %.2lf", perimeter, area);

    return 0;
}