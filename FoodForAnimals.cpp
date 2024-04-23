#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    int d = x-a;
    int e = y-b;
    if(d>0)c-=d;
    if(e>0)c-=e;
    if(c>=0)cout << "YES" << endl;
    else cout << "NO" << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
