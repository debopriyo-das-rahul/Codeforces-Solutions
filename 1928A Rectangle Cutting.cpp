#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    if ((a % 2 == 1 && b % 2 == 1) ||
        (a % 2 == 0 && b % 2 == 1 && b == a / 2) ||
        (a % 2 == 1 && b % 2 == 0 && a == b / 2)) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
}