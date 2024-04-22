#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a=0,b=0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A')a++;
        else b++;
    }
    cout << (a>b ? "A" : "B")<<endl;
    
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
