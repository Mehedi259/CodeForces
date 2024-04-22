#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && b == c)cout << a+1 << " " << b+1 << " " << c+1 << endl;
    else
    {
       int cmp = max({a, b, c});
       if (a == cmp) {c--; b--;}
       else if (b == cmp) {c--; a--;}
       else {a--;b--;}
       cout << cmp - a << " " << cmp - b << " " << cmp - c << endl;
    }
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
