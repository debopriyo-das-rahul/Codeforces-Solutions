#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, m;
  cin >> n >> m;
  if (m > n) {
    cout << -1 << endl;
    return;
  }
  int ass = 0;
  if (n % 2 == 0) {
    ass = n / 2;
  } else {
    ass = n / 2 + 1;
  }
  while (ass % m != 0) {
    ass++;
  }
  cout << ass << endl;
  return;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}