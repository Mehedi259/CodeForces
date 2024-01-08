#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];//1,2,2,2,2
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];//2,1,1,1,1
        }
        auto get = [&](vector<int> &v) -> vector<int>
        {
            vector<int> cnt(2*n+1);
            for(int i=0; i<n;)
            {
                int x = v[i];
                int curr = 0;
                while(i<n && v[i] == x)// 0<5 v[i] == 
                {
                    i++;
                    curr++;
                }
                cnt[x] = max(cnt[x],curr);//4
            }
            return cnt;
        };
        auto A = get(a);//4//2
        auto B = get(b);//4//2
        int ans = 0;
        for(int i = 0; i <= 2*n; i++)
        {
            ans = max(ans,A[i]+B[i]);
        }
        cout << ans << endl;
    }
    return 0;
}