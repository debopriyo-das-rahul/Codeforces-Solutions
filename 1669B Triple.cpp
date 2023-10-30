#include <iostream>
using namespace std;
void solve() {
  long long n;
  cin >> n;
  long long arr[n + 1];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  long long index[n + 1]{0};
  for (int i = 0; i < n; i++) {
    index[arr[i]]++;
  }
  for (int i = 0; i <= n; i++) {
    if (index[i] >= 3) {
      cout << i << endl;
      return;
    }
  }
  cout << "-1" << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}