#include <iostream>
using namespace std;
void solve() {
  int n;
  cin >> n;
  int count = 0;
  while (n != 1) {
    if (n % 6 == 0) {
      n /= 6;
      count++;
    } else if (n % 3 == 0) {
      n *= 2;
      count++;
    } else {
      count = -1;
      break;
    }
  }
  cout << count << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}