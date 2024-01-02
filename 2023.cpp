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
    // 1 2023 7 289 17 119
}
int32_t main()
{
    Mehedi_hasan();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, sum = 1;
        bool flag = false;
        cin >> n >> k;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum *= a[i];
        }
        if (2023 % sum != 0)
        {
            cout << "NO" << endl;
        }
        else
        {

            cout << "YES" << endl;
            for (int i = 0; i < k; i++)
            {
                if (i == 0)
                {
                    cout << 2023 / sum << " ";
                }
                else
                {
                    cout << 1 << " ";
                }
            }
        }
    }
    r0;
}
