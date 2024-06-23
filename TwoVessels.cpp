#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a,b,i,cnt=0;
    cin >> a >> b >> i;
    int x = max(a,b);
    int y = min(a,b);
    while(x > y)
    {
        x-=i;
        y+=i;
        cnt++;
    }
    cout << cnt << endl;

}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
