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
    int n, m, flag = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i * i + j) == n && (i + j * j) == m)
            {
                flag = 1;
            }
        }
    }
    if (m == 1 && n == 1)
    {
        cout << 2 << endl;
    }
    else if (flag == 1)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
int32_t main()
{
    Mehedi_hasan();

    solve();

    r0;
}
