#include <algorithm>
#include <iostream>
using namespace std;
void solve() {
  int n;
  cin >> n;
  int arr[n];
  bool possible = true;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        possible = false;
        break;
      }
    }
    if (!possible) {
      break;
    }
  }
  if (possible) {
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