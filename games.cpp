/*============================================**
 *Bismillahir Rahmanir Rohim*
 **============================================*/
// Mehedi Hasan Mridul

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
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
    int n;
    cin >> n;
    int count(0);           //n=3
                            //h[0]=1,a[0]=2
                            //h[1]=2,a[1]=4
                            //h[2]=3,a[2]=4
                            //
    vi h(n),a(n);
    REP(i,n)//i=2
    {                       //
        cin >> h[i] >> a[i];//h[2]=2,a[2]=4
        for(int j=0;j<i;j++)//i=2,j=1
        {
            if(h[i]==a[j])count++;//h[2]=3 == a[1]=4
            if(a[i]==h[j])count++;//h[1]=2 == a[2]=4
        }
    }
    cout << count << endl;
}
int main()
{
    fast();

    solve();
}
