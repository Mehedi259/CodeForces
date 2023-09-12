#include <iostream>
using namespace std;
int main()
{
    int n, fao=0;
    long long x;
    long long d;
    cin >> n >> x;
    while (n--)
    {
        char c;
        cin >> c >> d;
        if (c == '+')
        {
            x += d;
        }
        if (c == '-')
        {
            if (x < d)
                fao++;
            else
                x -= d;
        }
    }
    cout << x <<" " << fao << endl;
}