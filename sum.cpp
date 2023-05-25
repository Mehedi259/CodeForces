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

    int a, b, c;
    cin >> a >> b >> c;
    if (a == b == c)
    {

        cout << "NO" << endl;
    }
    else if (a > b && a > c)
    {
        if ((b + c) == a)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else if (b > a && b > c)
    {
        if ((a + c) == b)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else if (c > b && c > a)
    {
        if ((b + a) == c)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
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
