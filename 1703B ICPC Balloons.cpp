#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
void solve() {
  int n;
  cin >> n;
  char s[100];
  cin >> s;
  char freq[100] = {0};
  int idx = 0;
  for (int i = 0; i < n; i++) {
    int found = 0;
    for (int j = 0; j < idx; j++) {
      if (s[i] == freq[j]) {
        found = 1;
        break;
      }
    }
    if (!found) {
      freq[idx++] = s[i];
    }
  }
  cout << n + idx << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}