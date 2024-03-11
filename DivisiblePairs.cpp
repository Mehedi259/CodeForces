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
    int n, x, y, cnt = 0;
    cin >> n >> x >> y;
    vector<pair<int , int> > v;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        v.push_back({c%x, c%y});
    }
    sort(all(v));
    for(int i = 0; i < n; i++)
    {
        int ind = lower_bound(v.begin()+i+1, v.end(),make_pair((x-v[i].first)%x,v[i].second))-v.begin();
        int ind2 = lower_bound(v.begin()+i+1, v.end(),make_pair((x-v[i].first)%x,v[i].second+1))-v.begin();
        ans += ind2-ind;
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
