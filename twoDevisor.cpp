#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y;
        if (x == 1)
        {
            cout << y * y << endl;
        }
        else if (y % x == 0)
        {
            cout << (y / x) * y << endl;
        }
        else
        {
            cout << (x / __gcd(x,y)) * y << endl;
        }
    }
}