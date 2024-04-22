#include <bits/stdc++.h>
using namespace std;
#define int long long
void css (int n, int k)
{
    vector<int> seq(n, 0);
    for (int i = 0; i < n; i++){
        seq[i] = 1;
        k--;
    }

    seq[n-1] = k;
    for(int i = 0; i < n; i++)
    {
        cout << seq[i] <<" ";
    }
    cout << endl;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    css(n, k);
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
