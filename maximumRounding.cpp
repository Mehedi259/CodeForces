/*************************************************************************
    > File Name: b.cpp
    > Author: Beans
    > Mail: 3112748286@qq.com 
    > Created Time: 2023/8/9 19:07:45
 ************************************************************************/
#include <iostream>
#include <algorithm>
#define int long long
#define endl '\n'

using namespace std;

string x;

void solve(){
	cin >> x;
	int n = x.size() - 1;
	for(int i = 1; i <= n; i ++ )
		if(x[i] >= '5'){
			while(i >= 1 && x[i] >= '5'){
				x[i - 1] ++ ;
				i -- ;
			}
			//i = max(i, 0ll);
			for(int j = i + 1; j <= n; j ++ )
				x[j] = '0';
			break;
		}
	if(x[0] >= '5'){
		for(int i = 0; i <= n; i ++ )	x[i] = '0';
		x = '1' + x;
	}
	cout << x << endl;
}

signed main(){
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t = 1;
	cin >> t;
	while(t -- )
		solve();
}
