#include <bits/stdc++.h>
 
using namespace std;
 
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        k = min(k, 30);
        int x = 1 << k;
        cout << "k = " << x << endl;
        cout << min(n, (1 << k) - 1) + 1 << "\n";
    }
    return 0;
}