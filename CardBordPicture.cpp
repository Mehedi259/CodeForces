#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        auto possible = [&](ll w) -> ll
        {
            ll total = 0;
            for (int i = 0; i < n; i++)
            {
                ll side = (2ll * w) + arr[i];
                ll area = side * side;
                total += area;
                if (total > c)
                    return false;
            }
            return true;
        };

        ll low = 0ll, high = (ll)1e10, ans;
        while (low <= high)
        {
            ll mid = low + (high - low) / 2ll;
            if (possible(mid))
            {
                ans = mid;
                low = mid + 1ll;
            }
            else
            {
                high = mid - 1ll;
            }
        }
        cout << ans << endl;
    }
    return 0;
}