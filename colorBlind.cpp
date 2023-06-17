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
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    REP(i, n)
    {
        if (a[i] == 'R')
        {
            if(b[i] != 'R')
            {
                cout << "NO" << endl;
                return;
            }
        }
        else 
        {
            if(b[i] == 'R')
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    // REP(i, n)
    // {
    //     if (b[i] == 'B')
    //     {
    //         b[i] = 'G';
    //     }
    // }
    // sort(all(a));
    // cout << a << endl;
    // sort(all(b));
    // cout << b << endl;

    // if (a == b)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
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
