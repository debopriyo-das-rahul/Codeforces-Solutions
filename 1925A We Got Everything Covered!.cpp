#include <iostream>
#include <string>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    string s = "";
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < k; j++) {
        char c = 'a' + j;
        s += c;
      }
    }
    cout << s << endl;
  }
  return 0;
}