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
    int n, k, x;
    cin >> n >> k >> x;
    bool found = false;
    if (x == 1)
    {   
        for (int i = 2; i <=k ; i++)
        {
            if(n%i == 0)
            {
                found = true;
                break;
            }
        }
        
        if (found == true && k != 1)
        {
            cout << "YES" << endl << n/k << endl;
            for (int i = 0; i < n/k; i++)
            {
                cout << k << " ";
            }
            cout << nl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "YES" << endl
             << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << nl;
    }
}
int main()
{
    Mehedi_hasan();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    r0;
}
