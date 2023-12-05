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
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
            c++;
    }
    if (n == 1 and s[0] == '?')
    {
        cout << "B" << endl;
        return;
    }
    if (c == 0)
    {
        cout << s << endl;
        return;
    }
    if (c == s.size())
    {
        for (int i = 1; i <= n; i++)
        {
           // cout << " i & 1 = " << (i & 1) << endl;
            if (i & 1)
            {
                cout << "R";
            }
            else
            {
                cout << "B";
            }
        }
        cout << endl;
        return;
    }
    int st = 0;
    while (st < n)
    {
        if (s[st] == '?')
        {
            if (st - 1 >= 0)
            {
                if (s[st - 1] == 'B')
                {
                    s[st] = 'R';
                }
                else if (s[st - 1] == 'R')
                {
                    s[st] = 'B';
                }
            }
        }
        st++;
    }
    st = n-1;
    while (st >= 0)
    {
        if (s[st] == '?')
        {
            if (st + 1 < n)
            {
                if (s[st + 1] == 'B')
                {
                    s[st] = 'R';
                }
                else if (s[st + 1] == 'R')
                {
                    s[st] = 'B';
                }
            }
        }
        st--;
    }
    cout << s << endl;
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
