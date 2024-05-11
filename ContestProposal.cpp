#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6 + 5;
int arr[N], b[N];

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    int count = 0;
    while (true)
    {
        sort(arr + 1, arr + 1 + n);
        bool check = true;
        for (int i = 1; i <= n; i++)

            if (arr[i] > b[i])
            {
                check = false;
                break;
            }
        if (check == true)
            break;
        arr[n] = 0;
        count++;
    }
    cout << count << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
