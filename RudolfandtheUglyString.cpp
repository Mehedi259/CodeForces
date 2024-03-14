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
    string s;
    cin >> s;
    int i=0, ans=0;
    while(i<n)
    {
        if(i <= n-5 && s.substr(i,5) == "mapie")
        {
            ans++;
            i += 5;
        }
        else if(i <= n-3 && (s.substr(i,3) == "map" || s.substr(i,3) == "pie"))
        {
            ans++;
            i += 3;
        }
        else i++;
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
