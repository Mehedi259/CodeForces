/*============================================**
 *Bismillahir Rahmanir Rohim*
 **============================================*/
// Mehedi Hasan Mridul

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define pb push_back
#define all(a) a.begin(), a.end()
#define REP(x, n) for (int x = 0; x < n; x++)
#define REV(x, n) for (int x = n - 1; x >= 0; x--)
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
    string s;
    cin >> s;
    int n = s.size();
    int x = n/2;
    int flag(0);
    for(int i=0;i<n;i++)
    {
        if(s[i] == s[x])flag=1;
        if(s[x-i] != s[x+i] )flag=1;
        else flag = 0;
    }
    if(flag==1)cout << "NO" << endl;
    else cout << "YES" << endl;
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
}
