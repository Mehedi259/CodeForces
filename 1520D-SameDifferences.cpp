// Mehedi Hasan Mridul
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<int, int> a;
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x -= i;
        res += a[x];
        a[x]++;
    }
    cout << res << endl;
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
