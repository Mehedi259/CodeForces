#include <iostream>
#include <string>

using namespace std;

int minCostToMakeGood(const string& s) {
    int cost = 0;
    char current = '2'; 

    for (char ch : s) {
        if (ch == current) {
            cost++;
            current = '2'; 
        } else {
            current = ch;
        }
    }

    return cost;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int result = minCostToMakeGood(s);
        cout << result << endl;
    }

    return 0;
}
