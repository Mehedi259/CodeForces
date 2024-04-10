// Bismillahir Rahmanir Rohim
//       Author
// Mehedi Hasan Mridul

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pb push_back
#define all(a) a.begin(), a.end()
#define Mehedi_hasan() ios_base::sync_with_stdio(false), cin.tie(NULL)

typedef long long ll;
typedef set<int> si;
typedef set<ll> sl;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
void solve()
{
    int a, cnt =0;
    cin >> a;
    map<int, int> mp;
    int arr[a+1];
    for(int i=1; i<=a; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr+1, arr+a+1);
    for(int i=(a+1)/2; i<=a; i++)
    {
        if(arr[i] == arr[(a+1)/2])cnt++;
        else break;
    }
    cout << cnt << endl;
}
int32_t main()
{
    Mehedi_hasan();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
