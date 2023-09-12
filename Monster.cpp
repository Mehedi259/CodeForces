#define ll long long
#define isON(n, k) (((n) >> (k)) & 1)
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3;
int main()
{
    ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        pair<int, int> a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i + 1;
            a[i].first %= k;
            if (a[i].first)
                a[i].first = k - a[i].first;
        }
        sort(a, a + n);
        for (auto i : a)
            cout << i.second << ' ';
        cout << '\n';
    }
    return 0;
}