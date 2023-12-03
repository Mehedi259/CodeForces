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
}
int32_t main()
{
    Mehedi_hasan();
    int t;
    cin >> t;
read:
    while (t--)
    {
        ll n;
        cin >> n;
        vi a(n+1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 2; i <= n - 1; i++)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                cout << "YES" << endl;
                cout << i - 1 << " " << i << " " << i + 1 << endl;
                goto read;
            }
        }
        cout << "NO" << endl;
    }
    r0;
}
