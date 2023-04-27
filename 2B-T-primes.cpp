// Mehedi Hasan Mridul
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void solve()
{
    long long int b, sq;
    int a[1000000] = {0};
    for (int i = 2; i <= 1000000; i++)
    {
        if (a[i] == 0)
        {
            for (int j = 2; i * j <= 1000000; j++)
            {
                a[i * j] = 1;
            }
        }
    }
    cin >> b;
    sq = sqrt(b);
    if (b == 1)
        cout << "NO" << endl;
    else if (sq * sq == b && a[sq] == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
