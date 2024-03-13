#include <iostream>
#include <vector>

using namespace std;

bool canMakeZero(vector<int>& a)
{
    int n = a.size();
    if (n <= 2)
        return false;
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += a[i];
    if (sum % 2 != 0)
        return false;
    int maxElement = *maxElement(a.begin(), a.end());
    if (maxElement * 2 > sum)
        return false;
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        if (canMakeZero(a))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}