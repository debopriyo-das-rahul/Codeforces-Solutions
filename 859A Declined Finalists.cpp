#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int ans = 0, m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    m = a[i] - 25;
    ans = max(m, ans);
  }
  cout << ans << endl;
}