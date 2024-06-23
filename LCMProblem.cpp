#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int l,r;
    cin >> l >> r;
    if(l*2 > r) cout << -1 << " "<< -1 << endl;
    else cout << l << " "<< 2*l << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
