#include <algorithm>
#include <iostream>
using namespace std;
void solve() {
  int k;
  cin >> k;
  int a[12];
  int total = 0;
  for (int i = 0; i < 12; i++) {
    cin >> a[i];
    total += a[i];
  }
  if (total < k) {
    cout << "-1" << endl;
  } else {
    sort(a, a + 12, greater<int>());
    int count = 0;
    int month = 0;
    while (count < k) {
      count += a[month];
      month++;
    }
    cout << month << endl;
  }
}
int main() {
  solve();
  return 0;
}