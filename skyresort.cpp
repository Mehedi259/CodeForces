
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pii pair<int, int>
#define endl '\n'

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        int ans = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= q)
            {
                ++cnt;
                continue;
            }
            if (cnt < k)
            {
                cnt = 0;
                continue;
            }
            cnt -= k;
            ++cnt;
            ans += (cnt * (cnt + 1)) / 2;
            cnt = 0;
        }

        cnt -= k;
        ++cnt;
        if (cnt >= 0)
            ans += (cnt * (cnt + 1)) / 2;
        cout << ans << endl;
    }
}
