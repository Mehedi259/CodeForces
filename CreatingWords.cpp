#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s1, s2,s3;
    cin >> s1 >> s2;
    s3 = s1;
    s1[0] = s2[0];
    s2[0] = s3[0];
    cout << s1 << " " << s2 << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
