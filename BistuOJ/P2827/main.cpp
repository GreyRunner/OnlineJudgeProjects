#include <iostream>

using namespace std;

int main() {
    long long known = 0, n = 0, a[1000] = {0}, ans = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans += a[i] + (a[i] - 1) * known;
        known++;
    }
    cout << ans << endl;

    return 0;
}