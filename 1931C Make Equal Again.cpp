#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int cnt1 = 0, cnt2 = 0;
    if (n == 1) {
      cout << 0 << endl;
      continue;
    }
    for (int i = 0; i < n; i++) {
      if (arr[0] == arr[i]) {
        cnt1++;
      } else {
        break;
      }
    }
    for (int i = n - 1; i >= 0; i--) {
      if (arr[n - 1] == arr[i]) {
        cnt2++;
      } else {
        break;
      }
    }
    if (cnt1 == n) {
      cout << 0 << endl;
    } else if (arr[0] == arr[n - 1]) {
      cout << n - (cnt1 + cnt2) << endl;
    } else {
      cout << n - max(cnt1, cnt2) << endl;
    }
  }
}
