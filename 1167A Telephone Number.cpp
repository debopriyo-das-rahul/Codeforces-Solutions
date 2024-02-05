#include <iostream>
#include <string>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    int flag = n;
    for (int i = 0; i < n; i++) {
      if (s[i] == '8') {
        flag = i;
        break;
      }
    }
    if (n - flag >= 11) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}