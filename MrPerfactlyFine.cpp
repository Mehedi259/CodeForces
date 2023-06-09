/*============================================**
 *Bismillahir Rahmanir Rohim*
 **============================================*/
// Mehedi Hasan Mridul

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define pb push_back
#define all(a) a.begin(), a.end()
#define REP(x, n) for (int x = 0; x < n; x++)
#define REV(x, n) for (int x = n - 1; x >= 0; x--)
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
    ll n;
    cin >> n;
    map<string, ll> m;
    REP(i, n)
    {
        ll k;
        string s;
        cin >> k >> s;
        if (m[s] == 0)
            m[s] = k;
        else
            m[s] = min(m[s], k);
    }
    ll sum = 0, c = 0, d = 1e16;
    for (auto &a : m)
    {
        if (a.first == "00")
            continue;
        if (a.first == "11")
        {
            d = min(a.second, d);
            continue;
        }
        sum += a.second;
        c++;
    }
    if (d == 1e16 && c < 2)
        cout << -1 << nl;
    else if (d < 1e16 && c < 2)
        cout << d << nl;
    else
        cout << min(sum, d) << nl;
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
}
