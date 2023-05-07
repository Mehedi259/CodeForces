#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt[4] = {0};
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            int m;
            string s;
            cin >> m >> s;
            int skills = (s[0] - '0') * 2 + (s[1] - '0');
            cnt[skills]++;
        }
        for (int i = 0; i < 4; i++) {
            for (int j = i; j < 4; j++) {
                if (cnt[i] > 0 && cnt[j] > 0) {
                    ans = min(ans, cnt[i] + cnt[j]);
                }
            }
        }
        if (ans == INT_MAX) {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}
