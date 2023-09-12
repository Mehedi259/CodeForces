#include <bits/stdc++.h>

#define int long long
#define pb push_back
#define ff first
#define ss second
#define ld long double
#define sz(x) (int)((x).size())

using namespace std;

const int N = 2e5 + 5, inf = 2e18 + 1488;

void solve()
{
    string s;
    cin >> s;

    if ((s.back() - '0') % 2 == 0) cout << 0;
    else if ((s[0] - '0') % 2 == 0) cout << 1;
    else
    {
        int ok = 0;
        for (char c : s)
            ok |= ((c - '0') % 2 == 0);
        cout << (ok ? 2 : -1);
    }
    cout << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    while (q--)
        solve();
    return 0;
}


















