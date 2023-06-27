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
    int n;
    cin >> n;
    vi a(n);
    REP(i, n)
    {
        cin >> a[i];
    }
    REP(i, n)
    {
        int b;
        cin >> b;
        if (b == 0)
            continue;
        string s;
        cin >> s;
        for (int j = 0; j < b; j++)
        {
            if (s[j] == 'U')
            {
                a[i]--;
            }
            else if (s[j] == 'D')
            {
                a[i]++;
            }
            if (a[i] < 0)
            {
                a[i] += 10;
            }
            if (a[i] > 9)
            {
                a[i] -= 10;
            }
        }
    }
    REP(i, n)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
