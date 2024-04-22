#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,ans=1;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)cin >> a[i];
    sort(a.begin(), a.end());
    a[0]+=1;
    for(int i = 0; i < n; i++)ans*=a[i];
    cout << ans << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
