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
    string s;
    cin >> s;
    string hour = s.substr(0,2);
    int h = stoi(hour);
    string ap = "";
    if (h > 12)
    {
        h = h - 12;
        ap = "PM";
    }
    else if (h == 00)
    {
        h = 12;
        ap = "AM";
    }
    else if (h == 12)
        ap = "PM";
        else ap = "AM";
    s[1] = static_cast<char>(h % 10 + '0');
    h /= 10;
    s[0] = static_cast<char>(h % 10 + '0');
    cout << s << " " << ap << endl;
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
