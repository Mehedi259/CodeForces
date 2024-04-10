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
    bool dot = false;
    int cnt = 0;
    int row = 2 * n;
    int col = 2 * n;
    int currow = 0;
    int curcol = 0;
    bool rowdot = false;
    while (currow < row)
    {
        if (cnt == 2)
        {
            dot = !dot;
            cnt = 0;
        }
        cnt++;
        if (!dot)
        {
            cout << "#";
        }
        else
        {
            cout << ".";
        }
        curcol++;
        if (curcol == col)
        {
            curcol = 0;
            currow++;
            cout << endl;
            cnt = 0;
            if (currow % 2 == 0)
            {
                rowdot = !rowdot;
            }
            dot = rowdot;
        }
    }
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
