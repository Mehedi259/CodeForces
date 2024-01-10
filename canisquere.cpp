// Bismillahir Rahmanir Rohim
//       Author
// Mehedi Hasan Mridul

#include <bits/stdc++.h>
#define int long long
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
    int n, sum = 0, flag = 0;
    cin >> n;
    vi c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        sum += c[i];
    }
    //cout << ceil(sqrt(sum)) << endl;
   // cout << floor(sqrt(sum)) << endl;

    if (ceil(sqrt(sum)) == floor(sqrt(sum)))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO" << endl;
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
