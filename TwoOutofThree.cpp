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
    int n;
    cin >> n;
    vi vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    mii mp;
    for (auto it : vec)
    {
        mp[it]++;
    }
    vi s;
    for (auto it : mp)
    {
        if (it.second >= 2)
            s.push_back(it.first);
    }
    if (s.size() < 2)
        cout << -1 << endl;
    else
    {
        vi b;
        bool ok1 = false, ok2 = false;
        for (auto it : vec)
        {
            if (it == s[0])
            {
                b.push_back(ok1 ? 2 : 1);
                ok1 = true;
            }
            else if (it == s[1])
            {
                b.push_back(ok2 ? 3 : 1);
                ok2 = true;
            }
            else
                b.push_back(1);
        }
        for (auto it : b)
        {

            if (it > 0)
                cout << it << " ";
        }
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
