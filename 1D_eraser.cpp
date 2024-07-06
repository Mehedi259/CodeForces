#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,k,b=0,ans=0;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'B')
        {
            ans++;
            i+=k-1;
        }
    }
    cout << ans << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
