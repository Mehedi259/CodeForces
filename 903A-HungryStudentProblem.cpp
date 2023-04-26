// Mehedi Hasan Mridul
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    scanf("%d", &n);

    if (n & 1)
    {
        int a = n - 3;
        int b = n - 7;
        int c = n - 14;

        if ((a >= 0 && (a % 3 == 0 || a % 7 == 0)) || (b >= 0 && (b % 3 == 0 || b % 7 == 0)) || (c >= 0 && (c % 3 == 0 || c % 7 == 0)))
            printf("YES\n");
        else
            printf("NO\n");
    }
    else
    {
        int a = n - 6;
        int b = n - 10;
        int c = n - 14;

        if ((a >= 0 && (a % 3 == 0 || a % 7 == 0)) || (b >= 0 && (b % 3 == 0 || b % 7 == 0)) || (c >= 0 && (c % 3 == 0 || c % 7 == 0)))
            printf("YES\n");
        else
            printf("NO\n");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
