#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        
        int points[3] = {x1, x2, x3};
        sort(points, points + 3);
        
        
        int median = points[1];
        
        
        int total_distance = abs(points[0] - median) + abs(points[1] - median) + abs(points[2] - median);
        
        cout << total_distance << endl;
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
