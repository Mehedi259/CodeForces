// Mehedi Hasan Mridul
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> cnt(n + 1);
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        ++cnt[x];
    }
    int mx = *max_element(cnt.begin(), cnt.end());
    int diff = n + 1 - count(cnt.begin(), cnt.end(), 0);
    cout << max(min(mx - 1, diff), min(mx, diff - 1)) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
