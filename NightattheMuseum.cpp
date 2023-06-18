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
    // int a=0,b=1,c=2,d=3,e=4,f=5,g=6,h=7,i=8,j=9,k=10,
    // l=11,m=12,n=13,o=14,p=15,q=16,r=17,s=18,t=19,u=20,
    // v=21,w=22,x=23,y=24,z=25,sum=0;
    // string st;
    // cin >> st;
    // for(int i=0;i<st.size();i++)
    // {
    //     sum += min(st[i]-st[i+1],l-(st[i]-s[i+1]));
    // }
    // cout << sum << endl;
    int sum = 0;
    int d, i;
    char s[120];
    cin >> s;
    int l = strlen(s);
    d = abs(s[0] - 'a');
    // cout << "d =" << d << endl;
    if (d <= 13)
        sum += d;
    else
        sum += (26 - d);
    for (i = 0; i < l - 1; i++)
    {
        d = abs(s[i] - s[i + 1]);
        if (d <= 13)
            sum += d;
        else
            sum += (26 - d);
    }
    cout << sum << nl;
}
int main()
{
    fast();

    solve();
}
