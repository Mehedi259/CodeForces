#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    bool f1, f2;
    f1 = f2 = false;
    int temp = max(a,b);
    a = min(a,b);
    b = temp;
    for(int i=a; i<= b; i++)
    {
        if(c == i)
        {
            f1 = true;
        }
        if(d == i)
        f2 = true;
    }
    if((f1 && f2) || (!f1 && !f2))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
