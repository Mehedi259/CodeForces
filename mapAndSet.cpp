// Bismillahir Rahmanir Rohim
//       Author
// Mehedi Hasan Mridul

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<pair <int , int>, int> mp;
    pair <int , int> pp;
    int n ;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> pp.first >> pp.second;
        int ans;
        if (mp[pp] == 1) ans = 1;
        else
        {
            ans = 0;
            mp[pp] = 1;

        }
        cout << ans << endl;
    }
}