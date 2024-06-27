#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int m,n,cnt1=0,a,b,x=0,y,cnt2 = 0,row;
    cin >> m >> n;
    char arr [m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == '#')
            {
                cnt1++;
                a = i;
                b = j; 
                if(cnt1 == 1)y = j+1;
            
            }
        
        }
    } 
    if(cnt1 == 1) 
    {
        cout << a+1 << " " << b+1 << endl; 
        return;
    }
    else
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
            
                if(arr[i][j] == '#')
                {
                    cnt2++;
                    
                }
            
            }
            //cout << " x = " << x << endl;
            if(cnt2 >= x)
            {
                row = i;
            }
            x = max(x, cnt2);

            cnt2 = 0;
        }
        cout << row+1 << " " << y << endl;

    } 
}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
