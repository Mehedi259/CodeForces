#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long x,y,z;
    cin >> x >> y >> z;
    vector<pair<long long,long long>> a;
    for(int i=1; i<=x; i++)
    {
        int x1;
        int x2;
        cin >> x1 >> x2;
        a.push_back({x1,x2});
    }
    sort(a.begin(), a.end());
    long long it = a[0].first;
    long long itl = a[0].second;

    if(it >= y)
    {
        cout << "YES" << endl;
        return;
    }
    for(int i=1; i<x; i++)
    {
        if(a[i].first > itl)
        {
            if(a[i].first - itl >= y)
            {
                cout << "YES" << endl;
                return;
            }
        }
        itl = max(itl , a[i].second);
    }
    if(z - itl >= y)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
