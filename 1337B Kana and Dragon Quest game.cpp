#include <cmath>
#include <iostream>
using namespace std;
void solve() {
  int x, n, m;
  cin >> x >> n >> m;
  while (x > 0 && m > 0) {
    if (x > 20 && n > 0) {
      x = (x / 2) + 10;
      n--;
    } else {
      x -= 10;
      m--;
    }
  }
  if (x <= 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}