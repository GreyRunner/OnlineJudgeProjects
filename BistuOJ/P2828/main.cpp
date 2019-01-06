#include <iostream>

using namespace std;

int main() {
    long long n = 0, cont = 0, m = 0;

    cin >> n;
    while (n / 10 > 0) {
        m = 0;
        while (n > 0) {
            m += n % 10;
            n /= 10;
        }
        cont++;
        n = m;
    }

    cout << cont;

    return 0;
}