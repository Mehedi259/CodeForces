#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long ans = 1;
        string s;
        cin >> s;
        for (char c : s)
        {   
            long long x = c - '0';
            ans *= (x + 1) * (x + 2) / 2;
        }
        cout << ans << endl;
    }
}