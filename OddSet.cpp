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
    long n; scanf("%d", &n);
    long cnt(0);
    for(long p=0; p<2*n; p++)
    {
        long x; scanf("%d", &x);
        cnt += (x%2);
    }
    puts(cnt == n ? "YES" : "NO");
    // ll n, even = 0, odd = 0;
    // cin >> n;
    // vi a(n);
    // for (int i = 0; i < n * 2; i++)
    // {
    //     cin >> a[i];
    //     if (a[i] % 2 == 0)
    //     {
    //         even++;
    //     }
    //     else
    //     {
    //         odd++;
    //     }
    // }
    // if (odd == even)
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
