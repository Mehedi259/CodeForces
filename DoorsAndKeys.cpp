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
typedef map<char, int> mci;
void solve()
{
    string s;
    cin >> s;
    mci mp;
    int ans = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z') mp[s[i]] = 1;
        else
        {
            char z = s[i] + 32;
            // cout << "z = " <<  z << endl;
            if (mp[z] == 0)
            {
                ans = 1;
                break;
            }

        }
    }
    if(ans == 0) cout << "YES" << nl;
    else cout << "NO" << nl;
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
