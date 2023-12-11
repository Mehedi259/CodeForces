#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1), v2(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if (v[1] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}