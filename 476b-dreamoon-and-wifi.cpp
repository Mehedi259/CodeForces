#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int t(0), d(0), w(0);

    for (int i = 0; i < a.length(); i++)//5
    {
        d += b[i] == '?';//b0=f,b1=f,b3=?,b4=? d=2
        t += (a[i] == '+') ? 1 : -1;//a0=t,a1=f,a2=f,a3=f t=1-
        if (b[i] == '+') t -= 1;
        else if (b[i] == '-') t += 1;
    }

    for (int i = 0; i < (1 << d); i++)
    {
        int c = t, k = i;
        for (int j = 1; j <= d; j++)
        {
            c += (k & 1) ? 1 : -1;
            k /= 2;
        }
        w += (c == 0) ? 1 : 0;
    }

    d = 1 << d;
    cout.precision(20);
    cout << fixed << w / double(d) << endl;
    return 0;
}