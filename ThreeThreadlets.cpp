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
    ll a, b, c;
    cin >> a >> b >> c;
    if (b < a)
    {
        swap(a, b);
    }
    if (c < a)
    {
        swap(a, c);
    }
    if (c < b)
    {
        swap(b, c);
    }
    if (a == c || (a == b && 2 * a == c) || (a == b && 3 * a == c) || (b == c && 2 * a == c) || (a == b && 4 * a == c) || (a * 2 == b && a * 3 == c))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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
