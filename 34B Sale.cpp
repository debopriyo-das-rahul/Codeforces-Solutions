#include <algorithm>
#include <iostream>
using namespace std;
void solve() {
  int n, m;
  cin >> n >> m;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int sum = 0, count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] < 0) {
      count++;
      if (count > m) {
        break;
      }
      sum += -arr[i];
    }
  }
  cout << sum << endl;
}
int main() {
  solve();
  return 0;
}