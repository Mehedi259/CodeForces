// Bismillahir Rahmanir Rohim
//       Author
// Mehedi Hasan Mridul

#include <bits/stdc++.h>
#include <string.h>
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
    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;
        if (s == "DONE")
            continue;
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == ' ' || s[i] == '.' || s[i] == ',' || s[i] == '!')
                {
                    s.erase(i, 1);
                    i--;           
                }
            }
        }
        cout << s;
    }
}
int main()
{
    Mehedi_hasan();

    solve();

    r0;
}
