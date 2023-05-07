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
    ll m, n;
    cin >> m >> n;
    if (m < n)
        cout << "NO" << nl;
    else if (m == n)
        cout << "YES" << nl;
    else if (m % 3)
        cout << "NO" << nl;
    else if (m == n * 3)
        cout << "YES" << nl;
    else if (m == (n * 3) / 2)
        cout << "YES" << nl;
    else
    {
        stack<int> s;
        s.push(m);
        while (!s.empty())
        {
            ll x = s.top();
            s.pop();
            ll p = x / 3;
            ll q = p * 2;
            if (p == n || q == n)
            {
                cout << "YES" << nl;
                return;
            }
            if (p > n && p % 3 == 0)
                s.push(p);
            if (q > n && q % 3 == 0)
                s.push(q);
        }
        cout << "NO" << nl;
    }
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
