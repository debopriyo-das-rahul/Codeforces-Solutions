#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string ass = s;
  reverse(ass.begin(), ass.end());
  cout << min(s, ass + s) << endl;
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