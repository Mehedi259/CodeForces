#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;//2 1
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;// 0 0 3 3
        set<pair<int, int>> st1, st2; 
        for (int i = 0; i < 4; i++)
        {
            st1.insert({x1 + dx[i] * a, y1 + dy[i] * b});
            st2.insert({x2 + dx[i] * a, y2 + dy[i] * b});
            st1.insert({x1 + dx[i] * b, y1 + dy[i] * a});
            st2.insert({x2 + dx[i] * b, y2 + dy[i] * a});
        }
        int ans = 0;
        for (auto x : st1)
            if (st2.find(x) != st2.end())
                ans++;
        cout << ans << endl;
    }
}