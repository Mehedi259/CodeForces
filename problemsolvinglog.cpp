#include <bits/stdc++.h>
using namespace std;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;
        int arr[27] = {0};
        for (int i = 0; i < n; i++)
        {
            arr[s[i] - '0' - 16]++;
            cout << s[i] - '' - 16 << endl;
        }
        for (int i = 1; i <= 26; i++)
        {
            if (arr[i] >= i)
                cnt++;
        }
        // for (int i = 1; i <= 26; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        cout << cnt << endl;
    }
}