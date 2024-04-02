#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  ll n, b, d;
  cin >> n >> b >> d;
  vector<ll> a(n);
  ll cnt = 0, sum = 0;
  for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    if (x <= b) {
      sum += x;
    }
    if (sum > d) {
      cnt++;
      sum = 0;
    }
  }
  cout << cnt << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}