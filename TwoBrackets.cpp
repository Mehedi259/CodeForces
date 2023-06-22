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
    int cnt1 = 0, cnt2 = 0, moves = 0;
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            cnt1++;
        }
        else if (s[i] == '[')
        {
            cnt2++;
        }
        else if (s[i] == ')')
        {
            if (cnt1 >= 1)
            {
                moves++;
                cnt1--;
            }
        }
        else if (s[i] == ']')
        {
            if (cnt2 >= 1)
            {
                moves++;
                cnt2--;
            }
        }
    }
    cout << moves << nl;
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
