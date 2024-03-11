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
    int n,k;
    cin >> n >> k;
    vi v1(n);
    vi v2(n);
    for(int i=0; i<n; i++) cin >> v1[i];
    for(int i=0; i<n; i++) cin >> v2[i];
    vi diff(n+10);
    diff[0] = v2[0];
    for(int i=1; i<n; i++)
    {
        diff[i] = max(diff[i-1],v2[i]);
    }
    int ans = 0, total = 0;
    for(int i=0; i<min(n,k); i++)
    {
        total += v1[i];
        int r = k - (i+1);
        int p = total + r*diff[i];
        ans = max(ans,p);
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
