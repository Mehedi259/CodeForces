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
    ll m, n, msum = 0, nsum = 0;
    cin >> m >> n;
    vl a(m), b(n);
    REP(i, m)
    {
        cin >> a[i];
        msum += a[i];
    }
    REP(i, n)
    {
        cin >> b[i];
        nsum += b[i];
    }
    if(msum == nsum) cout << "Draw" << endl;
    else if (msum > nsum)
    {
        cout << "Tsondu" << endl;
    }
    else cout << "Tenzing" << endl;
    
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
