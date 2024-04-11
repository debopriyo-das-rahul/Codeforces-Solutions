#include <bits/stdc++.h>
using namespace std;
void gg() {
  int n, m;
  cin >> n >> m;
  string a, b;
  map<string, string> mp;
  while (m--) {
    cin >> a >> b;
    if (a.length() > b.length()) {
      mp[a] = b;
    } else {
      mp[a] = a;
    }
  }
  while (n--) {
    cin >> a;
    cout << mp[a] << " ";
  }
  cout << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  gg();
  return 0;
}