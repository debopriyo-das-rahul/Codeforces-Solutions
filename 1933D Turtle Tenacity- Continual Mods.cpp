#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int min = *min_element(a.begin(), a.end());
  if (count(a.begin(), a.end(), min) == 1) {
    cout << "YES" << endl;
    return;
  }
  for (int x : a) {
    if (x % min != 0) {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
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