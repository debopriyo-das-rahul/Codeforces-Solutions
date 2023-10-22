#include <iostream>
using namespace std;
void solve() {
  long long int n;
  cin >> n;
  if (n % 2 != 0) {
    cout << "YES" << endl;
  } else {
    long long int div = n;
    while (div > 2) {
      div /= 2;
      if (div % 2 != 0) {
        cout << "YES" << endl;
        break;
      }
    }
    if (div % 2 == 0) {
      cout << "NO" << endl;
    }
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