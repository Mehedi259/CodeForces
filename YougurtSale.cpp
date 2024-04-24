#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    float a, b;
    cin >> n >> a >> b;
    // b = b/2;
    if (n % 2 == 0 && a > b / 2)
        cout << (n * b) / 2 << endl;
    else if (b / 2 > a)
        cout << n * a << endl;
    else
        cout << ((n - 1) * b )/ 2 + a << endl;
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
