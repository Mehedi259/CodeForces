#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[n-1] << endl;
    return 0;
}