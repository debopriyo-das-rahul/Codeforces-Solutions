#include <bits/stdc++.h>
using namespace std;
int main() {
  long long a, b, c, d = 0;
  cin >> a >> b >> c;
  long long mx = max(a, max(b, c));
  long long ans = max(d, mx - a - 1) + max(d, mx - b - 1) + max(d, mx - c - 1);
  cout << ans << endl;
}