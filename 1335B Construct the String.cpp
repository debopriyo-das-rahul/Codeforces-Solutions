#include <cstring>
#include <iostream>
using namespace std;
char alphabates[] = "abcdefghijklmnopqrstuvwxyz";
void solve() {
  int a, n, b;
  cin >> n >> a >> b;
  string s[n];
  for (int i = 0; i < b; i++) {
    s[i] = alphabates[i];
  }
  for (int i = 0; i < n; i++) {
    cout << s[i % b];
  }
  cout << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}