#include <iostream>
using namespace std;
int main() {
  int a, b, t;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    if ((a + b) % 2 != 0) {
      cout << "Alice" << endl;
    } else {
      cout << "Bob" << endl;
    }
  }
}