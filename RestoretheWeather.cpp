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
    ll n, k;
    cin >> n >> k;
    vector<pll> v;
    ll b[n + 2], an[n + 2];
    REP(i, n)
    {
        ll x;
        cin >> x;
        v.push_back({x, i});
    }
    REP(i, n)
        cin >> b[i];
    sort(b, b + n);
    sort(v.begin(), v.end());
    REP(i, n)
    {
        ll y = v[i].second;
        an[y] = b[i];
    }
    REP(i, n)
        cout << an[i] << " ";
    cout << "\n";
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
