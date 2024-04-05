#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int khula = 0, bondho = 0, ass = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '(' && s[i + 1] == ')') {
      i++;
      continue;
    }
    if (s[i] == '(') {
      khula++;
    }
    if (s[i] == ')') {
      bondho++;
      if (bondho > khula) {
        ass++;
        bondho--;
      }
    }
  }
  cout << ass << endl;
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