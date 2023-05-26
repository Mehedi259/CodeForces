// Bismillahir Rahmanir Rohim
//       Author
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
    ll i, j, n, m;
    char s[101][101];
    while (cin >> n >> m)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> s[i][j];
            }
        }
        ll mn_i = n, mx_i = -1, mx_j = -1, mn_j = m;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (s[i][j] == '*')
                {
                    if (i < mn_i)
                        mn_i = i;
                    if (i > mx_i)
                        mx_i = i;
                    if (j < mn_j)
                        mn_j = j;
                    if (j > mx_j)
                        mx_j = j;
                }
            }
        }
        for (i = mn_i; i <= mx_i; i++)
        {
            for (j = mn_j; j <= mx_j; j++)
            {
                cout << s[i][j];
            }
            cout << endl;
        }
    }
}
int main()
{
    fast();

    solve();
}
