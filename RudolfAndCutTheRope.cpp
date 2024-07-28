#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,cnt=0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        if(a != b && a > b) cnt++;
    }
    cout << cnt << endl;

}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
