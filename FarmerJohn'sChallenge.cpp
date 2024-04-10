#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        // Check if it's impossible to create a valid array
        if (k > (n + 1) / 2) {
            cout << "-1\n";
            continue;
        }
        
        // Create an array with alternating sorted and unsorted segments
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            a[i] = i % 2 == 0 ? i / 2 + 1 : n - i / 2;
        
        // If k is less than or equal to the number of sorted segments, print the array
        if (k <= (n + 1) / 2) {
            for (int i = 0; i < n; ++i)
                cout << a[i] << " ";
            cout << "\n";
        } else {
            cout << "-1\n";
        }
    }
    
    return 0;
}
