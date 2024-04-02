#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int one_idx = 1;
    while (one_idx * 2 <= n) {
      one_idx *= 2;
    }
    cout << one_idx << endl;
  }
}