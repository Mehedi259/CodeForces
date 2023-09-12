#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, H;
        cin >> X >> H;

        int turns = 0;
        if (X * 2 >= H) {
            turns = 1;
        } else {
            turns += (H / X) * 2;
            if (H % X != 0) {
                turns += 2;
            }
        }

        cout << turns << endl;
    }

    return 0;
}
