#include<bits/stdc++.h>
using namespace std;
void printbinary(int n)
{
    for(int i=10; i>=0; i--)
    {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}
int main()
{
    for(int i=0; i<10; i++)
    {
        printbinary(i); 
    }
}