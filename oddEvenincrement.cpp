#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
    cin >> n;
    int arr[n],brr[n],crr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        brr[i] = arr[i];
        crr[i] = arr[i];
    } 
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)c5++;
        else if(crr[i]%2 != 0)c6++;
    }
    for(int i=0; i<n; i+=2)
    {
        brr[i] = brr[i] + 1;   
    }
    for(int i=1; i<n; i+=2)
    {
        crr[i] = crr[i] + 1;   
    }
    for(int i=0; i<n; i++)
    {
        if(brr[i]%2 == 0)c1++;
        else if(brr[i]%2 != 0)c2++;
    }  
    for(int i=0; i<n; i++)
    {
        if(crr[i]%2 == 0)c3++;
        else if(crr[i]%2 != 0)c4++;
    }
    //cout << c5 << endl;
    if(c1==n ||c2 == n || c3 == n || c4 == n || c6 == n || c5 == n)cout << "YES" << endl;
    else cout << "NO" << endl;

    
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
