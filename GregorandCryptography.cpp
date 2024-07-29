#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,x;
    cin >> n;
    if(n%2 == 0)
    {
        x = n%3;
        cout << 3 << " " << n-x << endl;
    } 
    else
    {
        x = n%2;
        cout << 2 << " " << n-x << endl;
    }
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
