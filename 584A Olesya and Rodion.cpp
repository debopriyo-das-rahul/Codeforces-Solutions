#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, t;
  cin >> n >> t;
  if (n == 1 && t == 10) {
    cout << -1 << endl;
  } else if (n >= 2 && t == 10) {
    for (int i = 1; i < n; i++) {
      cout << 1;
    }
    cout << 0 << endl;
  } else {
    for (int i = 1; i <= n; i++) {
      cout << t;
    }
    cout << endl;
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}