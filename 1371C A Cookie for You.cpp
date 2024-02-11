#include <iostream>
using namespace std;
int main() {
  long long t, a, b, n, m;
  cin >> t;
  while (t--) {
    cin >> a >> b >> n >> m;
    if ((a + b) >= (n + m) && min(a, b) >= m) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}