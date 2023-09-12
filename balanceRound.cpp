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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(all(a));
    int ans = 1, cnt =1;
    for(int i = 1; i < n; i++)
    {
        if(a[i] - a[i-1] > k)
        {
            cnt = 1;
        }
        else cnt++;
        ans = max(ans, cnt);

    }
    cout << n-ans << endl;
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
