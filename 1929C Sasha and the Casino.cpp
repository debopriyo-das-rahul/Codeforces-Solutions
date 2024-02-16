#include <bits/stdc++.h>
using namespace std;
void solve() {
  int k, x, a;
  cin >> k >> x >> a;
  long long bet = 0;
  for (int i = 0; i < x; i++) {
    long long coins = bet / (k - 1);
    while (coins * (k - 1) <= bet) {
      coins++;
    }
    bet += coins;
    if (bet >= a) {
      cout << "NO" << endl;
      return;
    }
  }
  if (k * (a - bet) <= a) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}