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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int s = 0;
    int arr_sum = 0;
    int max_sum = 0;

    for (int i = 0; i < n; ++i)
    {
        s += v[i];
        arr_sum += v[i];
        if (s < 0)
        {
            s = 0;
        }
        else
        {
            max_sum = max(s, max_sum);
        }
    }

    int final_sum = arr_sum;

    int exp = static_cast<int>(pow(2, k));
    final_sum += (((exp - 1) * max_sum) % MOD);

    int ans = final_sum % MOD;
    cout << ans << endl;
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