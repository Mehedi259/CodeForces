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
int mex(const set<int>& s)
{
    int mex = 0;
    while(s.find(mex) != s.end())
    {
        mex++;
    }
    return mex; 
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; ++i)
    {
        cin >> a[i];
    }
    vi p;
    set<int> s;
    for(int i=0; i<n; ++i)
    {
        int mex_val = mex(s) + a[i];
        p.push_back(mex_val);
        s.insert(mex_val);
    }
    for(int i=0; i<n; ++i)
    {
        cout << p[i] << " ";
    }
    cout << endl;
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
