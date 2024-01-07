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
{   // n=6; k=3; d=5; w=3
    int n,k,d,w;
    cin >> n >> k >> d >> w;
    vi t(n);
    for(int i = 0; i < n; i++)
    {
        cin >> t[i];
        // 1 2 3 10 11 18
        // 0 1 2 3 4 5 6 
    }
    int when = -1;
    int count = 0;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(t[i] <= when+d && count > 0)//t[0] = 1 < -1+5 and count !> 0
        {
            count --;
        }
        else
        {
            when = t[i] + w;// 1+3
            count = k-1;//
            ans++;
        }
    }
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
    r0;
}
