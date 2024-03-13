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
    string l, r;
    cin >> l >> r;
    while (r.size() < l.size())
        r = "0" + r;
    while (l.size() < r.size())
        l = "0" + l;
    bool take9 = false;
    int ans = 0;
    for(int i = 0; i < l.size(); i++)
    {
        if(take9)
        {
            ans += 9;
            continue;
        }
        if(l[i] != r[i])
        {
            ans += (abs(l[i] - r[i]));
            take9 = true;
        }
    }
    cout << ans << endl;
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
