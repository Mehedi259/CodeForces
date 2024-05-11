#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int x, y;
    cin >> x >> y;
    if(x <= y)
    cout << x << " "<< y << endl;
    else cout << y << " " << x << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
