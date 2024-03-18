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
    vi a(2 * n);
    unordered_map<int, vector<int>> xor_indices;

    for (int i = 0; i < 2 * n; ++i)
    {
        cin >> a[i];
        xor_indices[a[i]].push_back(i + 1);
    }
    vector<int> l, r;
    int xorr = 0;
    for (int i = 1; i <= n && l.size() < k; i++)
    {
        if (xor_indices.find(i) != xor_indices.end())
        {
            for (int j = 0; j < xor_indices[i].size(); j += 2)
            {
                if (l.size() + (xor_indices[i].size() - j) / 2 <= k)
                {
                    for (int p = j; p < j + 2 && l.size() < k; ++p)
                    {
                        l.push_back(xor_indices[i][p]);
                        r.push_back(xor_indices[i][p+1]);
                    }
                }
            }
        }
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
