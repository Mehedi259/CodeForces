#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, sum = 0;
    cin >> n;
    vector<int> v(n); // Corrected vector size

    // Input elements into vector
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // Calculate the sum using a single loop
    for (int i = 0; i < n; i++) // Iterate until n
    {
        sum += abs(v[i] - v[(i + 1) % n]); // Absolute difference between adjacent elements, considering cyclic wraparound
    }

    cout << sum << endl;
}

int32_t main()
{
  
   
        solve();
    
    return 0;
}
