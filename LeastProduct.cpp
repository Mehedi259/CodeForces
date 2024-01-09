#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x=0,y=0;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
               y++;
            }
            if (a[i] < 0)
            {
                x++;
            }
        }
        if(y)
        {
            cout << 0 << endl;
        }
        else if (x % 2 != 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
    }
}