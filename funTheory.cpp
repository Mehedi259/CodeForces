#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    map<int, int> match;
    for (int i = 0; i < n; ++i) {
        int diff;
        cin >> diff;
        match[n - diff]++;
    }
    
    bool f = true;
    for (auto it = match.begin(); it != match.end(); ++it) {
        if (it->second % it->first != 0) {
            f = false;
            break;
        }
    }
    
    cout << (f ? "Possible" : "Impossible") << endl;

    return 0;
}
