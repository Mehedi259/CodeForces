#include <iostream>
#include <vector>
#include <algorithm>
#define int long long

using namespace std;

int32_t main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, f, a, b;
        cin >> n >> f >> a >> b;
        
        vector<int> m(n + 1);
        m[0] = 0;
        
        for (int i = 1; i <= n; ++i) {
            cin >> m[i];
        }
        
        for (int i = 1; i <= n; ++i) {
            int cost = min(a * (m[i] - m[i - 1]), b);
            f -= cost;
        }
        
        if (f > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
