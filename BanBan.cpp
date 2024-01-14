// Bismillahir Rahmanir Rohim
//       Author
// Mehedi Hasan Mridul

#include <bits/stdc++.h>
using namespace std;
#define int long long
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
    string s = "#";
    for (int i = 0; i < n; i++)
    {
        s = s + "BAN";
    }
    n = s.size()-1;
    vector<pair<int, int> > ans;
    int l = 2, r = n;
    while(l<r)
    {
        ans.push_back({l, r});
        swap(s[l], s[r]);
        l += 3;
        r -= 3;
    }
    cout << ans.size() << endl;
    for(auto i: ans)
    {
        cout << i.first << " " << i.second << endl;
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
