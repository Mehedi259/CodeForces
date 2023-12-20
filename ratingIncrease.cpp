#include <iostream>
#include <string>

using namespace std;

void solve_testcase()
{
    string s;
    cin >> s;//20002001
    int n = s.length();//8

    for (int i = 1; i < n; ++i)//n=8
    {
        string a_str = s.substr(0, i);//a_str=2000
        string b_str = s.substr(i);//b_str=2001

        if (a_str[0] != '0' && b_str[0] != '0')
        {
            int a = stoi(a_str);
            int b = stoi(b_str);

            if (b > a)
            {
                cout << a << " " << b << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {

        solve_testcase();
    }

    return 0;
}
