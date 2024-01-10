#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> c(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];
        int cnt[2] {};
        int p = c[0], q = c.back();
        for (int i = 0; i < n; i++)
        {
            if (c[i] == p)
                if (cnt[0] == k)
                    continue;
                else
                    cnt[0]++;
            if (c[i] == q && cnt[0] == k)
                cnt[1]++;
        }
        if (p == q)
            cnt[1] = cnt[0];
        if (cnt[1] >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}