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
    int cnt = 0;
    ll n;
    cin >> n;
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    for (int i = 0; i < n; i++)
    {
        // int x = v[i];
        if (v[i] == v[i + 1])
        {
            cnt++;
            if (cnt == 2)
            {
                cout << v[i] << "\n";
                return;
            }
        }
        else cnt = 0;
    }
    cout << -1 << "\n";
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
