#include <bits/stdc++.h>
using namespace std;

#define REP(x,n) for(int x=1; x<=n; x++)
#define REV(x,n) for(int x=n; x>0; x--)
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;

void solve(ll test_case)
{
    ll n, k, s=0, m =0;
    cin>>n>>k;
    ll a[n+2];
    REP(i,n) cin>>a[i];
    sort(a+1,a+n+1);
    ll l[n+2]={0};
    REP(i,n) l[i] = l[i-1] + a[i];
    int i=1, j=n;
    for(i=0; i<=k; i++) {
      ll an = l[n-k+i] - l[i*2];
      m = max(an,m);
    }
    cout << m << "\n";
}

int main()
{
    ll t = 1, t1 = 0;
    cin >> t;
    while (t1 < t)
    {
        solve(t1 + 1);
        t1++;
    }
}
