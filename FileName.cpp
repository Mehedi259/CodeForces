#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, cnt = 0, ans = 0, mnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            cnt++;
            mnt++;
        }
        else
        {
            if (cnt > 2)
            {
                ans += cnt - 2;
                cnt = 0;
            }
            else
                cnt = 0;
        }
    }
    if(cnt > 2)ans += cnt - 2;
    if (mnt == n)
        cout << n - 2 << endl;
    else
        cout << ans << endl;
}
int32_t main()
{
    solve();
    return 0;
}
