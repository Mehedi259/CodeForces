// Bismillahir Rahmanir Rohim
//       Author
// Mehedi Hasan Mridul

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define r0 return 0
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
    int n, s1 = 0, s2 = 0;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0, j = n - 1;
    int turn = 1;
    while (i <= j)
    {
        if (arr[i] > arr[j])
        {
            if (turn % 2 == 1)
            {
                s1 += arr[i];
            }
            else
            {
                s2 += arr[i];
            }
            i++;
        }
        else
        {
            if (turn % 2 == 1)
            {
                s1 += arr[j];
            }
            else
            {
                s2 += arr[j];
            }
            j--;
        }
        turn++;
    }
    cout << max(s1,s2) << " " << min(s1,s2) << endl;
}
int main()
{
    fast();

    solve();

    r0;
}
