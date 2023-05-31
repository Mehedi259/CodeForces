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
    int len = s.size();
    // int fig = s[0];
    // cout << fig << endl;
    // cout << s[0] << endl;
    int dig = s[0] - '0' - 1;
    // cout << dig << endl;
    int count = 10 * dig + len * (len + 1) / 2;
    // int count = (10 * (2 - 1)) + (2 * (2 + 1)) / 2;
    cout << count << endl;
    // cout << s[0] << endl;
    // cout << s.size() << endl;
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
    r0;
}
