#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    a.push_back(temp);
  }
  vector<int> x;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    x.push_back(abs(temp));
  }
  vector<pair<int, int>> m;
  for (int i = 0; i < n; i++) {
    m.push_back({x[i], a[i]});
  }
  sort(m.begin(), m.end());
  long long ass = 0;
  for (auto &m : m) {
    ass += m.second;
    if (ass > 1LL * m.first * k) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
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