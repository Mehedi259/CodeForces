#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string x, y;
    cin >> x >> y;
    int l=0;
    for(int i=0; i< x.size(); i++)
    {
        if(l >=y.size())break;
        if(x[i] == y[l])
        {
            l++;
            continue;
        }
        if(x[i] == '?')
        {
            x[i] = y[l];
            l++;
            continue;
        }
    }
    for(int i=0; i<x.size(); i++)
    {
        if(x[i] == '?')x[i] = 'a';
    }
    if(l >= y.size())
    {
        cout << "YES" << endl;
        cout << x << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
