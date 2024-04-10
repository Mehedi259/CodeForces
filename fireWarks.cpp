#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a,b,m;
        cin >> a >> b >> m;
        cout << ((m/a)+1)+((m/b)+1)<<endl; 
    }
}