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
#define fr(i,a,b) for(int i=a;i<=b;i++)
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
    string s;
    cin >> s;
    ll n = s.size();
    int a[n] = {0}, b = 0, B = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'b')
        {
            b++;
            a[i] = 1;
        }
        else if (s[i] == 'B')
        {
            B++;
            a[i] = 1;
        }
        else if (s[i] < 'a')
        {
            if (B > 0)
            {
                B--;
                a[i] = 1;
            }
        }
        else
        {
            if (b > 0)
            {
                b--;
                a[i] = 1;
            }
        }
    }
    fr(i, 0, n - 1) if (a[i] == 0) cout << s[i];
    cout << nl;
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
