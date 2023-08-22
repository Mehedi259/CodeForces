#include <iostream>
using namespace std;
int f[2020];
int main()
{
    int i, j, k, n, ans;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> f[i];
    ans = 0;
    for (i = 1; i <= n; i++)
    {
        j = f[i], k = 0;
        while (j != -1)
            j = f[j], k++;
        // cout<<i<<" "<<k<<endl;
        ans = max(ans, k);
    }
    cout << ++ans << endl;
    // system("pause");
    return 0;
}
