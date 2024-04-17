#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> a(n * n), b(n * n);
    for (int i = 0; i < n*n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    b[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        b[i] = b[i - 1] + c;
    }
    for (int i = 1; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            b[i * n + j] = b[(i - 1) * n + j] + d;
        }
    sort(b.begin(), b.end());
    cout << (a == b ? "YES" : "NO") << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
