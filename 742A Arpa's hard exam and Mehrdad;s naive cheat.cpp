#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n, ass = 1, base = 8;
  cin >> n;
  while (n) {
    if (n % 2) {
      ass = (ass * base) % 10;
      n--;
    } else {
      base = (base * base) % 10;
      n /= 2;
    }
  }
  cout << ass << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}