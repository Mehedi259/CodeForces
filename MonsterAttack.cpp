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
    vi health(n), position(n+1,0);
    for(int i=0; i<n; i++)cin >> health[i];
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        position[abs(x)] += health[i];
    }
    int bullet = k;
    bool ok = true;
    for(int i=1;i<=n;i++)
    {
        bullet -= position[i];
        if(bullet<0)ok = false;
        bullet += k;
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
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
