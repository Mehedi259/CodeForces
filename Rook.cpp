
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char col;
        int row;
        cin >> col >> row;
        for (char c = 'a'; c <= 'h'; ++c) {
            if (c != col) {
                cout << c << row << " ";
            }
        }

        for (int r = 1; r <= 8; ++r) {
            if (r != row) {
                cout << col << r << " ";
            }
        }

        cout << endl;
    }

    return 0;
}