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
    int n, sum = 0, cnt = 0;
    cin >> n;
    vi a(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = n; i > 0; i--)
    {
        if (sum % 3 == 0)
        {
          cout << 0 << endl;
          break;
        }
        else
        {
            sum -= a[i];
            if(i == 1 && sum % 3 != 0)
            {
                cout << a[i] - 3 << endl;
            }
            else
        }

        cout << cnt << endl;
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
