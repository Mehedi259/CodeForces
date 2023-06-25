#include <bits/stdc++.h>
using namespace std;

#define REP(x, n) for (int x = 0; x < n; x++)
#define REV(x, n) for (int x = n - 1; x >= 0; x--)
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define mhkhan                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;

void solve(ll test_case)
{
    ll n, p = 0, m = 0, an = 0;
    // n= 5
    //-1 -1 -1
    cin >> n;
    REP(i, n)
    {
        ll x;
        cin >> x;
        if (x == 1)
            p++; // p=0
        else
            m++; // m=3
    }
    if (m % 2)
    {
        m--;  // m=2
        p++;  // p=1
        an++; // an=1
    }
    if (p % 2)
    {

        p--;
    }
    m = m - p;//m=3-2=1
    if (m > 0) // m=1
    {
        ll q = (m / 2); // q=0
        if (q % 2)
            q++; //
        an += q; // an=1
    }
    cout << an << "\n";
}

int main()
{
    mhkhan;
    ll t = 1, t1 = 0;
    cin >> t;
    while (t1 < t)
    {
        solve(t1 + 1);
        t1++;
    }
}
