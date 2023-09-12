#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,n;
        cin >> x >> y >> n;
        vector<int> a(n+1);
        a[1] = x;
        a[n] = y;
        if(y-x >= n*(n-1)/2)
        {
            for(int i=n-1; i>=2; i--)
            {
                a[i] = a[i+1] - (n-i);
            }
            for(int i=1; i<=n; i++)
            {
                cout << a[i] <<" " ;
            }
        }
        else cout << -1 ;
        cout << endl;
    }
}