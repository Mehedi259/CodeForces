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
    int a, b, n, div;
    cin >> a >> b;
    if (a > b)
    {
        cout << b << " ";
        n = a - b;
        cout << n / 2;
    }
    else
    {
        cout << a << " ";
        n = b - a;
        cout << n / 2;
    }
}
int main()
{
    fast();

    solve();
}
