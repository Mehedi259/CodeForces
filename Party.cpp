//In the name of Allah, the Gracious, the Merciful

#include <bits/stdc++.h>
using namespace std;

 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int n, d;
    cin >> n >> d;
    vector<int> p(n);
    for(int i=0; i<n;i++) cin >> p[i];
    sort(p.begin(), p.end());
    int l = 0, r = n - 1;
    int ans = 0;
    while (r >= l) {
        long long cur = p[r];
        while (l < r && cur <= d) {
            cur += p[r];
            ++l;
        }
        if (cur > d) {
            ++ans;
        }
        --r;
    }
    cout << ans << '\n';
 
    return 0;
}



