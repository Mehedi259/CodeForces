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
#define Mehedi_hasan() ios_base::sync_with_stdio(false), cin.tie(NULL)

typedef long long ll;
typedef set<int> si;
typedef set<ll> sl;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
void solve()
{
    vector<ll> vec(6);
    for (ll i = 0; i < 6; i++)
    {
        cin >> vec[i];
    }
    ll a = vec[2] - vec[0];
    ll b = vec[4] - vec[0];
    ll c = vec[3] - vec[1];
    ll d = vec[5] - vec[1];
    if (a < 0 && b < 0)
    {
        a = abs(a);
        b = abs(b);
    }
    if (c < 0 && d < 0)
    {
        c = abs(c);
        d = abs(d);
    }
    ll row = max((ll)0, min(a, b));
    ll col = max((ll)0, min(c, d));
    cout << row + col + 1 << endl;
}
int32_t main()
{
    Mehedi_hasan();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    r0;
}
