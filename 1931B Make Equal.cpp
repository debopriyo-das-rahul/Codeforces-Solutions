#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }
    bool valid = true;
    long long x = sum / n;
    long long count = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] > x) {
        count += a[i] - x;
      } else if (a[i] < x) {
        if (count < x - a[i]) {
          cout << "NO" << endl;
          valid = false;
          break;
        }
        count -= x - a[i];
      }
    }
    if (valid) {
      cout << "YES" << endl;
    }
  }
}