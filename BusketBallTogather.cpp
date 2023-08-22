// In the name of Allah, the Gracious, the Merciful

#include <bits/stdc++.h>
using namespace std;

#define nn "\n"
#define ll long long
#define ull unsigned long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    ll n, d, i, no_p, no_e, cnt = 0;
    cin >> n >> d;
    vector<ll> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    for (i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    for (i = 0; i < v.size(); i++)
    {
        no_p = (d / v[i]) + 1;
        cout << no_p << ""
        if (v.size() - i >= no_p)
        {
            cnt++;
            no_e = no_p - 1;
            while (no_e--)
                v.pop_back();
        }
    }
    cout << cnt << nn;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // ll t; cin>>t; while(t--)
    solve();

    return 0;
}
