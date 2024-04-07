#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll x;
  cin >> x;
  ll ass = 0;
  while (x != 0) {
    if (x % 2 == 1) {
      ass++;
    }
    x /= 2;
  }
  cout << ass << endl;
}
int main() {
  solve();
  return 0;
}