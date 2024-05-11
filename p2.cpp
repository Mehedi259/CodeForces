#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    for(int i = 1; i <(int)s.size(); ++i)
    {
        if(s[i] != s[i-1])
        {
            swap(s[i], s[i-1]);
            cout<< "YES\n" << s << endl;
            return;
        }
    }
    cout<< "NO"<< endl;
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
