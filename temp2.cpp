#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;//4
    int d, f[n] = {0}, s, t;
    for (int i = 2; i < n + 2; ++i)
    {
        cin >> d;//2,3,4,9
        f[i] = f[i - 1] + d;
        //fp=[2] = f[1] + 2;f[2]=2
                        //  f[3]=5
                        //  f[4]=9
                        //  f[5]=18
    }
    cin >> s >> t;//1,3
    if (s > t)
    {
        swap(s, t);
    }
    int distance = f[t] - f[s];//f[t]=f[3]-f[1]=5-0=5
    cout << min(distance, (f[n + 1] - distance)) << endl;
    return 0;
}