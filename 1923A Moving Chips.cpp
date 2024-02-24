#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int f = 0, l = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == 1) {
      f = i;
      break;
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    if (a[i] == 1) {
      l = i;
      break;
    }
  }
  for (int i = f; i <= l; i++) {
    if (a[i] == 0) {
      cnt++;
    }
  }
  cout << cnt << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}