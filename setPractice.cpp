#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> ss;
    int arr[6] = {5, 4, 3, 6, 2, 3};
    for (int i = 0; i < 6; i++)ss.insert(arr[i]);
    set <int> :: iterator it;
    for(it = ss.begin(); it != ss.end(); it++)
    {
        cout << *it << endl;
    }
}