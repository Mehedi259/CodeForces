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
    int n, m, flag = 0;
    cin >> n >> m;
    if(n==2&&m==3)cout << "YES"<< endl;
    else if(n==3&&m==5)cout << "YES"<< endl;
    else if(n==5&&m==7)cout << "YES"<< endl;
    else if(n==7&&m==11)cout << "YES"<< endl;
    else if(n==11&&m==13)cout << "YES"<< endl;
    else if(n==13&&m==17)cout << "YES"<< endl;
    else if(n==17&&m==19)cout << "YES"<< endl;
    else if(n==19&&m==23)cout << "YES"<< endl;
    else if(n==23&&m==29)cout << "YES"<< endl;
    else if(n==29&&m==31)cout << "YES"<< endl;
    else if(n==31&&m==37)cout << "YES"<< endl;
    else if(n==37&&m==41)cout << "YES"<< endl;
    else if(n==41&&m==43)cout << "YES"<< endl;
    else if(n==43&&m==47)cout << "YES"<< endl;
    else cout << "NO" << endl;
}
int main()
{
    fast();
    solve();
    r0;
}
