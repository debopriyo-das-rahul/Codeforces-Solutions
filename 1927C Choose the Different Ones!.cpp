#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    set<int> a, b, ass;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a.insert(x);
    }
    for (int i = 0; i < m; i++) {
      int x;
      cin >> x;
      b.insert(x);
    }
    int cnt1 = 0, cnt2 = 0;
    for (auto x : a) {
      if (x <= k) {
        cnt1++;
        ass.insert(x);
      }
    }
    for (auto x : b) {
      if (x <= k) {
        cnt2++;
        ass.insert(x);
      }
    }
    if (ass.size() == k && cnt1 >= k / 2 && cnt2 >= k / 2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
