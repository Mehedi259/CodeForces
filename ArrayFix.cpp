// Bismillahir Rahmanir Rohim
//       Author
// Mehedi Hasan Mridul

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pb push_back
#define all(a) a.begin(), a.end()
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
    ll n;
    cin >> n;
    vl v(n);
    for (int i = 0; i < n; i++)
    cin >> v[i];
    ll curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < curr)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            ll x = v[i] / 10;
            ll y = v[i] % 10;
            if (x >= curr)
            {
                if (y >= x)
                {
                    curr = y;
                }
                else
                {
                    curr = v[i];
                }
            }
            else
            {
                curr = v[i];
            }
        }
    }
    cout << "YES" << endl;
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
    return 0;
}
