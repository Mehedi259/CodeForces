#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
    int v= n/m;
    if(n%m) v += 1;
    n -= v;
    if(n>k)cout << "YES" << endl;
    else cout << "NO" << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
