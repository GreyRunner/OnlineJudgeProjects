#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0;

    cin >> a >> b >> c;
    if (a > b) {
        swap(a, b);
    }
    if (b > c) {
        swap(b, c);
    }
    if (a * a + b * b == c * c) {
        cout << "yes." << endl;
    } else {
        cout << "no." << endl;
    }

    return 0;
}