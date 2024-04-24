#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n),c(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    for(int i = 0; i < n; i++)c[i] = v[i];    
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
        if(c[i] == v[n-1])
        {
            cout << v[n-1] - v[n-2]  << " ";
        }
        else cout << c[i] - v[n-1] << " ";
    }
    cout << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
