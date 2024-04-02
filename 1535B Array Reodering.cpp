#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  vector<int> a, even, odd;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x % 2 == 0) {
      even.push_back(x);
    } else {
      odd.push_back(x);
    }
  }
  for (auto x : even) {
    a.push_back(x);
  }
  for (auto x : odd) {
    a.push_back(x);
  }
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (__gcd(a[i], 2 * a[j]) > 1) {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}