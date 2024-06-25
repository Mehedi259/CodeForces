#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    if((a + b + c) % 2 == 1)cout << -1 << endl;
    else{
        cout << (a + b + c - max(0ll, c - b - a))/2 << endl; 
    }
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
