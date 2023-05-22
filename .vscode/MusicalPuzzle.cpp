#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        string melody;
        cin >> melody;

        int count = 1; // Start with one recorded melody
        for (int i = 1; i < n; i++) {
            if (melody[i] != melody[i - 1]) {
                count++;
            }
        }

        cout << (count + 1) / 2 << endl;
    }

    return 0;
}
