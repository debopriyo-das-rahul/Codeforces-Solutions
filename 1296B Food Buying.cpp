#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  int ans = n;
  if (n < 10) {
    cout << n << endl;
  } else {
    while (n >= 10) {
      int div = n / 10;
      int mod = n % 10;
      n = div + mod;
      ans += div;
    }
    cout << ans << endl;
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}