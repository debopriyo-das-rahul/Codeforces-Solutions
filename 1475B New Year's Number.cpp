#include <iostream>
using namespace std;
void solve() {
  int n;
  cin >> n;
  int mod = n % 2020;
  int div = n / 2020;
  if (mod <= div) {
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