#include <bits/stdc++.h>
using namespace std;
void dodo() {
  int n, k;
  cin >> n >> k;
  int x = (n + k - 1) / k;
  long long sum = x * k;
  cout << (sum + n - 1) / n << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    dodo();
  }
}