#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s1,s2;
        cin >> s1 >> s2 ;
        bool flag = false;
        for(int i=0; i+1 < s1.size(); i++)
        {
            if(s1[i] == s2[i] && s1[i] == '0' && s1[i+1] == '1' && s1[i+1] == s2[i+1])
            flag = true;
        }
        if(flag)
        {
            puts("YES");
        }
        else
        puts("NO");
    }
}