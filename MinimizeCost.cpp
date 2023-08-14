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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b && a < c || a > c && a < b)
        {
            cout << "Case " << i+1 << ": " <<  a << endl;
        }
        else if (b > a && b < c || b > c && b < a)
        {
            cout << "Case " << i+1 << ": " <<  b << endl;
        }
        else if (c > a && c < b || c > b && c < a)
        {
            cout << "Case " << i+1 << ": " <<  c << endl;
        }
    }
}
int main()
{
    Mehedi_hasan();

    solve();

    r0;
}
