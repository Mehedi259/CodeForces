#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s;
    cin >> s;
    if((s.back() - '0') % 2 == 0)
    {
        cout << "0\n";
        return;
    }
    if((s[0] - '0') % 2 == 0)
    {
        cout << "1\n";
        return;
    }
    int cnt2 = count(s.begin(), s.end(), '2');
    int cnt4 = count(s.begin(), s.end(), '4');
    int cnt6 = count(s.begin(), s.end(), '6');
    int cnt8 = count(s.begin(), s.end(), '8');
    if(cnt2 > 0 || cnt4 > 0 || cnt6 > 0 || cnt8 > 0)
    {
        cout << "2\n";
        return;
    }
    cout << "-1\n";
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
