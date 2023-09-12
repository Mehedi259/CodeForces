#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        // Read input array a
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Sort array a in ascending order
        sort(a.begin(), a.end());

        // Generate permutation b
        for (int i = 0; i < n; i++) {
            b[i] = i + 1;
        }

        // Output the permutation b
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
