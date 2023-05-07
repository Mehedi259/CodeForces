#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int boys[n];
    for (int i = 0; i < n; i++) {
        cin >> boys[i];
    }
    cin >> m;
    int girls[m];
    for (int i = 0; i < m; i++) {
        cin >> girls[i];
    }
    sort(boys, boys+n);
    sort(girls, girls+m);
    int i = 0, j = 0, pairs = 0;
    while (i < n && j < m) {
        int p = abs(boys[i] - girls[j]) <= 1 ;
        cout << "abs value" << p << endl;
        if (abs(boys[i] - girls[j]) <= 1) {
            pairs++;
            i++;
            j++;
        } else if (boys[i] < girls[j]) {
            i++;
        } else {
            j++;
        }
    }
    cout << pairs << endl;
    return 0;
}
