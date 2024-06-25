#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)cin >> arr[i];
    int sum=0, mx = 0, ans=0;
    for(int i = 0; i < n; i++)
    {
        sum+=arr[i];
        mx = max(mx, arr[i]);
        if(sum - mx == mx)ans++;

    }
    cout << ans << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
