// Bismillahir Rahmanir Rohim
//       Author
// Mehedi Hasan Mridul

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define r0 return 0
#define pb push_back
#define all(a) a.begin(), a.end()
#define REP(i, n) for (int i = 0; i < n; i++)
#define REV(i, n) for (int i = n - 1; i >= 0; i--)
#define fast() ios_base::sync_with_stdio(false), cin.tie(NULL)

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
void solve()
{
    ll n, mx = 0, mx2 = 0;
    cin >> n;
    vl a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] > a[i])
        {
            mx = max(mx, b[i]);
            mx2 = max(mx2, a[i]);
        }
        else
        {
            mx = max(mx, a[i]);
            mx2 = max(mx2, b[i]);
        }
    }
    cout << mx * mx2 << endl;
}
int main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    r0;
}
