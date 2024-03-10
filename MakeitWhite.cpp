#include <iostream>
#include <deque>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    deque<char> dq(s.begin(), s.end());

    while (!dq.empty() && dq.front() == 'W') {
        dq.pop_front();
    }

    while (!dq.empty() && dq.back() == 'W') {
        dq.pop_back();
    }

    cout << dq.size() << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}
