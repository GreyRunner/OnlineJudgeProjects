#include <iostream>

using namespace std;

int main() {
    int n, ans;

    cin >> n;
    if (n <= 10 || n > 21) {
        cout << "0" << endl;
    } else if (n != 20) {
        cout << "4" << endl;
    } else {
        cout << "15" << endl;
    }

    return 0;
}