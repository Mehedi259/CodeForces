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
    vector<ll> even, odd;
    REP(i, n)
    {
        ll x;
        cin >> x;
        if (x % 2)
            odd.push_back(x);
        else
            even.push_back(x);
    }
    ll p = even.size(), q = odd.size();
    if (p == 0 || q == 0)
    {
        cout << "YES\n";
        return;
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    ll x = even[0], y = odd[0];
    if (x > y)
        cout << "YES\n";
    else
        cout << "NO\n";
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
