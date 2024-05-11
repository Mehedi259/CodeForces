#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s = "314159265358979323846264338327";
    int cnt = 0;
    string s1;
    cin >> s1;
    for(int i = 0; i <s1.length(); i++)
    {
        if(s[i] != s1[i])
        {
            break;
        }
        else cnt++;
    }
    cout << cnt << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
