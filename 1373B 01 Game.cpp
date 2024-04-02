#include <bits/stdc++.h>
using namespace std;
void solve() {
  string s;
  cin >> s;
  int o = 0, z = 0;
  for (auto x : s) {
    if (x == '1') {
      o++;
    } else {
      z++;
    }
  }
  int ass = min(o, z);
  if (ass % 2 == 0) {
    cout << "NET" << endl;
  } else {
    cout << "DA" << endl;
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
}