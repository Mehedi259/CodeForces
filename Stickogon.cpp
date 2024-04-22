#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> cnt(101, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ++cnt[x];
    }
    int res = 0;
    for(int i = 1; i <= 100; i++)
    {
        res += cnt[i]/3;
        cnt[i] = 0;
    }
    cout << res << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
