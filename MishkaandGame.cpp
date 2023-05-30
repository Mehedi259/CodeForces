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
    ll mis, cri, n, d, m = 0, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> mis >> cri;
        if (mis > cri)
        {
            m++;
        }
        else if (cri > mis)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    if (c == m || d==n)
    {
        cout << "Friendship is magic!^^" << endl;
    }

    else if (m > c)
    {
        cout << "Mishka" << endl;
    }
    else if (c > m)
    {
        cout << "Chris" << endl;
    }
}
int main()
{
    fast();

    solve();

    r0;
}
