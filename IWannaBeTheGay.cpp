// Mehedi Hasan Mridul
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin >> n;
    int x;
    cin >> x;
    int a[250];
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    int y;
    cin >> y;
    for (int i = x; i < y+x; i++)
    {
        cin >> a[i];
    }

    sort(a, a + (x+y));
    for (int i = 0; i < x+y; i++)
    {
        if (a[i] != a[i+1])
            count++;
    }
    if(count == n)
    {
        cout << "I become the guy.";
    }
    else cout << "Oh, my keyboard!";
}
