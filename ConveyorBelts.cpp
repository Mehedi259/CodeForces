#include <iostream>
#include <algorithm>

using namespace std;

int layer(int n, int x, int y) {
    return min({x, y, n + 1 - x, n + 1 - y});
}

void solve() {
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    cout << abs(layer(n, x1, y1) - layer(n, x2, y2)) << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}
