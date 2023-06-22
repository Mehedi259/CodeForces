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
    int n,step = 0, cnt1 = 0, cnt2 = 0;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    if(cnt1 == cnt2 || cnt1 == 0)
    {
        cout << 0 << endl;
    }
    // cout << "Executed" << endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            if(cnt1 >= cnt2 || cnt1%2 != 0)
            {
                cnt1--;
                cnt2++;
                step++;
            }
            else
            {
                step = 1;
            }
        }
        cout << step << endl;

    }
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
