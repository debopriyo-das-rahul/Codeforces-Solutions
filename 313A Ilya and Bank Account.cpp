#include <iostream>
using namespace std;
void solve() {
  int n;
  cin >> n;
  if (n >= 0) {
    cout << n;
  } else {
    int a = n / 10;
    int b = (n / 100) * 10 + n % 10;
    cout << max(a, b) << endl;
  }
}
int main() {
  solve();
  return 0;
}