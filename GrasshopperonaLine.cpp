#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.length();

        
        for (int i = 0; i < n; i++) {
            if (s[i] == '?') {
                s[i] = '0';
            }
        }

        
        int firstNonZero = n - 1;
        while (firstNonZero >= 0 && s[firstNonZero] == '0') {
            firstNonZero--;
        }

        
        if (firstNonZero >= 0) {
            for (int i = firstNonZero; i < n; i++) {
                if (s[i] == '0') {
                    s[i] = '1';
                } else {
                    s[i] = '0';
                }
            }
        }

        cout << s << "\n";
    }

    return 0;
}
