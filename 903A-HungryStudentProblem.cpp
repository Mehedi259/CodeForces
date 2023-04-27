// Mehedi Hasan Mridul
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, b, c;
    scanf("%d", &n);

    if (n & 1)
    {
        a = n - 3;
        b = n - 7;
        c = n - 14;

        if ((a >= 0 && (a % 3 == 0 || a % 7 == 0)) || (b >= 0 && (b % 3 == 0 || b % 7 == 0)) || (c >= 0 && (c % 3 == 0 || c % 7 == 0)))
            printf("YES\n");
        else
            printf("NO\n");
    }
    else
    {
        a = n - 6;
        b = n - 10;
        c = n - 14;

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
