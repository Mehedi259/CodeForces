#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];//1 2
    }
    int ans = 0;
    for (int i = 1; i <= n / 2; i++)//n=2
    {
        if (n % i == 0)//true
        {
            int max = 0, min = 1e18;
            for (int j = 0; j < n; j += i)//n=2//j=1
            {
                int sum = 0;//1
                for (int k = j; k < j + i; ++k)//1+1//k=0
                {
                    sum += a[k];//sum = 3
                }
                if (sum > max)//tr
                {
                    max = sum;//max = 3
                }
                if (sum < min)
                {
                    min = sum;//min = 1
                }
            }
            if (max - min > ans)
            {
                ans = max - min;
            }
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}