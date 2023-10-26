#include <iostream>
using namespace std;
void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int count0 = 0;
  int count1 = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0') {
      count0++;
    } else {
      count1++;
    }
  }
  int remove = min(count0, count1);
  cout << n - (2 * remove);
}
int main() {
  solve();
  return 0;
}