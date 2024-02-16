#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int d = n * 2 - 1;
    int ans = max((k + 1) / 2, d - 1 + (k - (d * 2 - 2)));
    cout << ans << endl;
  }
}
