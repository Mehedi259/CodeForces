#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, k, sum = 0;
    cin >> n >> k;
    vector<int> arr1(n), arr2(n);
    for(int i=0; i<n; i++)cin >> arr1[i];
    for(int i=0; i<n; i++)cin >> arr2[i];
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end(), greater<int>());
    //for(int i=n, i>=0; i--)arr3[i]
    //for(int i=0; i<n; i++)cout << arr1[i] << " ";
    //cout << endl;
    //for(int i=0; i<n; i++)cout << arr2[i] << " ";
    //cout << endl;
    if(k == 0)
    {
        for(int i=0; i<n; i++)sum += arr1[i];
        cout << sum << endl;
        return;
    }
    else
    {
        for(int i=0; i<k; i++)
        {
            if(arr1[i] <= arr2[i])arr1[i] = arr2[i];
        }  
    }
    for(int i=0; i<n; i++)sum += arr1[i];

    cout << sum << endl;


}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
