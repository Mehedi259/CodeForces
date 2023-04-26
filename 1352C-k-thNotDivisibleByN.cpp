// Mehedi Hasan Mridul
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
    int need = (k-1)/(n-1);
    cout << k+need << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
