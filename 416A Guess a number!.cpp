#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  int r = 2 * 1e9 + 7, l = 2 * -1e9 + 7;
  while (t--) {
    string s;
    int x;
    char c;
    cin >> s >> x >> c;
    if ((s == ">=" && c == 'Y') || (s == "<" && c == 'N')) {
      l = max(l, x);
    } else if ((s == ">" && c == 'Y') || (s == "<=" && c == 'N')) {
      l = max(l, x + 1);
    } else if ((s == "<" && c == 'Y') || (s == ">=" && c == 'N')) {
      r = min(r, x - 1);
    } else {
      r = min(r, x);
    }
  }
  if (l > r) {
    cout << "Impossible" << endl;
  } else {
    cout << l << endl;
  }
  return 0;
}