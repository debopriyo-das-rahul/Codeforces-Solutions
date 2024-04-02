#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int cnt = 1, ass = 0;
  for (int i = 0; i < n - 1; i++) {
    if (arr[i + 1] - arr[i] <= k) {
      cnt++;
    } else {
      ass = max(cnt, ass);
      cnt = 1;
    }
  }
  ass = max(cnt, ass);
  cout << n - ass << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}