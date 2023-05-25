/*============================================**
 *Bismillahir Rahmanir Rohim*
 **============================================*/
// Mehedi Hasan Mridul

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define pb push_back
#define all(a) a.begin(), a.end()
#define REP(x, n) for (int x = 0; x < n; x++)
#define REV(x, n) for (int x = n - 1; x >= 0; x--)
#define fast() ios_base::sync_with_stdio(false), cin.tie(NULL)

typedef long long ll;
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
    string a = s.substr(0, 2);
   // cout << "substr =" << a << endl;
    for (int i = 3; i < s.size(); i += 2)
    {
        a+=s[i];
    }
    cout << a << endl;
}
int main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
