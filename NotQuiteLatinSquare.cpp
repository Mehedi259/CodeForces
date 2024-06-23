#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a=0,b=0,c=0;
    string s1,s2,s3,s;
    cin >> s1>>s2>>s3;
    s = s1+s2+s3;
 
    for(int i = 0; i <s.length(); i++)
    {
        if(s[i] == 'A')a++;
        else if(s[i] == 'B')b++;
        else if(s[i] == 'C')c++;
    }
  
    if(a == 2 && b == 3 && c == 3)cout << "A" << endl;
    else if(a == 3 && b == 2 && c == 3)cout << "B" << endl;
    else if(a == 3 && b == 3 && c == 2)cout << "C" << endl;

}
int32_t main(){int t;cin >> t;while(t--){solve();}return 0;}
