#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s1,s2;
    cin >> s1 >> s2;
    s1+=s2;
    cout << set<char>(s1.begin(),s1.end()).size()-1 << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
