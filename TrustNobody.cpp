#include <iostream>
using namespace std;

int main() {
int t;
cin >> t;
while (t--) {
int n, m;
cin >> n >> m;
int max_votes = 0, max_count = 0;
for (int i = 0; i < n; i++) {
int v;
cin >> v;
if (v > max_votes) {
max_votes = v;
max_count = 1;
} else if (v == max_votes) {
max_count++;
}
}
if (max_count > 1 || max_votes * 2 > n) {
cout << "NO\n";
} else {
cout << "YES\n";
}
}
return 0;
}