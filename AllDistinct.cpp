#include <bits/stdc++.h>
typedef long long  ll;
using namespace std;

void solve()
{
	int n, x;
	cin >> n;
	set<int> a;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		a.insert(x);
	}
	if((n-a.size())%2 == 0)
	{
		cout << a.size() << endl;
	}
	else
	{
		cout << a.size()-1 << endl;
	}
}

int32_t main(){
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}
