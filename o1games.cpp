#include <iostream>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int o = 0, t = 0;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (c == '0')
                o++;
            else
                t++;
        }
        int ans = min(t, o);
        if (ans % 2 == 0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }
}