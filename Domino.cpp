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
    int n, s1 = 0, s2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        s1 += x;
        s2 += y;
    }
    if (s1 == 1 && s2 == 1)
        cout << -1 << endl;
    else if (s1 % 2 != 0 && s2 % 2 != 0)
        cout << 1 << endl;
    else if (s1 % 2 == 0 && s2 % 2 == 0)
        cout << 0 << endl;
    else
        cout << -1 << endl;
}
int main()
{
    Mehedi_hasan();

    solve();

    r0;
}
