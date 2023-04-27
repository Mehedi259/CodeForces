#include <iostream>
using namespace std;

int main() {
  int i, x, y, n;
  cin >> n;
  for (i = 1; i <= n; i++) {
    cin >> x >> y;
    if (x != y) {
      cout << "Happy Alex" << endl;
      return 0;
    }
  }
  cout << "Poor Alex" << endl;
  return 0;
}
