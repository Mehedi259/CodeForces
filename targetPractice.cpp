#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int sum = 0;
    int hr[100] = {
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1,
        1, 2, 3, 3, 3, 3, 3, 3, 2, 1, 1, 2, 3, 4, 4, 4, 4, 3, 2, 1,
        1, 2, 3, 4, 5, 5, 4, 3, 2, 1, 1, 2, 3, 4, 5, 5, 4, 3, 2, 1,
        1, 2, 3, 4, 4, 4, 4, 3, 2, 1, 1, 2, 3, 3, 3, 3, 3, 3, 2, 1,
        1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    for (int i = 0; i < 100; i++)
    {
        char c;
        cin >> c;
        if (c == 'X')
            sum += hr[i];
    }
    cout << sum << endl;
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
