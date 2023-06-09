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
    int a[5];
    for (int i = 1; i <= 4; i++)cin >> a[i];
    // 1 2 3 4
    string s;
    cin >> s;
    // 123214
    int sum = 0;
    for(int i=0;i<s.size();i++)sum += a[s[i]-'0'];
    cout << sum << endl;
}
int main()
{
    fast();

    solve();

    r0;
}
