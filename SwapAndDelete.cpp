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
    string s;
    cin >> s;
    int z = 0, o = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            o++;
        else
            z++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            if (z > 0)
                z--;
            else
                break;
        if (s[i] == '0')
            if (o > 0)
                o--;
            else
                break;
    }
    cout << o + z << endl;
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
