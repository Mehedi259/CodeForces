// Bismillahir Rahmanir Rohim
//       Author
// Mehedi Hasan Mridul

#include <bits/stdc++.h>
#define mem(array, num) memset(array, num, sizeof(array))
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
    ll n, i;
    while (cin >> n)
    {
        ll a[n + 2];
        for (i = 1; i <= n; i++)
            cin >> a[i];
        ll left = 1, right = n, sum1 = 0, sum2 = 0;
        i = 1;
        while (left <= right)
        {
            if (i % 2 == 1)
            {
                if (a[left] >= a[right])
                    sum1 += a[left++];
                else
                    sum1 += a[right--];
            }
            else
            {
                if (a[left] >= a[right])
                    sum2 += a[left++];
                else
                    sum2 += a[right--];
            }
            i++;
        }
        cout << sum1 << " " << sum2 << endl;
    }
}
int main()
{
    Mehedi_hasan();

    solve();

    r0;
}
