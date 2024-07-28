#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    string s = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> mp;
    for(int i = 0; i < s.size(); i++)mp[s[i]] = 0;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        for(auto it : mp)
        {
            if(it.second == v[i])
            {
                cout << it.first ;
                mp[it.first]++;
                break;
            }
        }
    }
    cout << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
