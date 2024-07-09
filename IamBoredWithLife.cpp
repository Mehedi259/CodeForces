#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a,b;
    cin >> a >> b;
    int ans =1;
    for(int i=1; i <= min(a,b); i++)
    {
        ans *= i;
    }
    cout << ans << endl;
}
int32_t main(){solve();return 0;}
