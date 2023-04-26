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
        cout << "x =" << res << endl;

        res += a[x];
        cout << "res =" << res << endl;
        a[x]++;
        cout << "a[x] =" << a[x] << endl;
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
