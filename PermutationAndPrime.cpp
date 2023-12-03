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
}
int32_t main()
{
    Mehedi_hasan();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n == 2)
        {

            cout << "2 1" << endl;
            continue;
        }
        vi ans(n, -1);
        ans[n / 2] = 1;
        ans[0] = 3;
        ans[n - 1] = 2;
        int curr = 4;
        for (int i = 0; i < n - 1; i++)
        {
            if (ans[i] != -1)
                continue;
            ans[i] = curr++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
    }
    r0;
}
