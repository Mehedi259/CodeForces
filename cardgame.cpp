#include <iostream>
using namespace std;

int solve(int a1, int a2, int b1, int b2) {
    int suneet_wins = 0;
    
    if (a1 > b1 && a2 > b2) suneet_wins++;
    if (a1 > b2 && a2 > b1) suneet_wins++;
    if (a2 > b1 && a1 > b2) suneet_wins++;
    if (a2 > b2 && a1 > b1) suneet_wins++;
    
    return suneet_wins;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cout << solve(a1, a2, b1, b2) << endl;
    }

    return 0;
}
