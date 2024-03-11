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
    int n;
    cin >> n;
    int ans = n-1;
    string s;
    cin >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'B')ans--;
        else break;
    }
    for(int i=n-1; i>=0; i--)
    {
        if(s[i] == 'A')ans--;
        else break;
    }
    if(ans >= 0)cout << ans << endl;
    else cout << 0 << endl;

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
