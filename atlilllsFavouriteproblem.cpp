#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,max=0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        char ca;
        cin >> ca;
        int check = ca;
        if(check > max) max = check;

    }
    cout << max-96 << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
