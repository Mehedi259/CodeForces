#include <bits/stdc++.h>
using namespace std;

#define REP(x, n) for (int x = 0; x < n; x++)
#define REV(x, n) for (int x = n - 1; x >= 0; x--)
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
    ll m, n;
    cin >> m >> n;
    if (m < n)
        cout << "NO\n";
    else if (m == n)
        cout << "YES\n";
    else if (m % 3)
        cout << "NO\n";
    else if (m == ((n * 3) / 2))
        cout << "YES\n";
    else if (m == n * 3)
        cout << "YES\n";
    else
    {
        stack<int> s;
        s.push(m);
        while (!s.empty())
        {
            ll x = s.top();
            s.pop();
            ll p = x / 3;
            ll q = p * 2;
            if (p == n || q == n)
            {
                cout << "YES\n";
                return;
            }
            if (p > n && p % 3 == 0)
                s.push(p);
            if (q > n && q % 3 == 0)
                s.push(q);
        }
        cout << "NO\n";
    }
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
