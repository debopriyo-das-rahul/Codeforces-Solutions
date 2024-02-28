#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a.push_back(x);
    }
    int sum = accumulate(a.begin(), a.end(), 0);
    int r = sum % 3;
    int one = 0, two = 0;
    if (r == 0) {
      cout << 0 << endl;
    } else if (r == 1) {
      for (int x : a) {
        if (x % 3 == 1) {
          one++;
          break;
        }
      }
      if (one == 0) {
        cout << 2 << endl;
      } else if (one == 1) {
        cout << 1 << endl;
      }
    } else if (r == 2) {
      cout << 1 << endl;
    }
  }
}