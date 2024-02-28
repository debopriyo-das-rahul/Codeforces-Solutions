#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a.push_back(abs(x));
    }
    cout << accumulate(a.begin(), a.end(), 0) << endl;
  }
}