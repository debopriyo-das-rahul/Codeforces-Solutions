#include <cstring>
#include <iostream>

using namespace std;
void solve() {
  string s, hello = "hello";
  cin >> s;
  int j = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == hello[j]) {
      j++;
    }
  }
  (j == 5) ? cout << "YES" << endl : cout << "NO" << endl;
}
int main() {
  solve();
  return 0;
}