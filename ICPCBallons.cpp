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
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    bool vis[26] = {};
    int res = 0;
    for (char c : s)
    {
        if (!vis[c - 'A'])
        {
            res += 2;
            vis[c - 'A'] = true;
        }
        else
            res++;
    }
    // REP(i, n)
    // {
    //     if (s[i] != s[i + 1])
    //         count += 2;
    //     else
    //         count++;
    // }
    cout << res << endl;
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
