#include <iostream>
#include <string>
using namespace std;
void solve() {
  int n;
  cin >> n;
  string s, ans;
  cin >> s;
  int count1 = 0;
  for (int i = 0; i < s.size() - 1; i++) {
    int count2 = 0;
    for (int j = 0; j < s.size() - 1; j++) {
      if (s.substr(j, 2) == s.substr(i, 2)) {
        count2++;
        if (count1 < count2) {
          count1 = count2;
          ans = s.substr(i, 2);
        }
      }
    }
  }
  cout << ans << endl;
}
int main() {
  solve();
  return 0;
}