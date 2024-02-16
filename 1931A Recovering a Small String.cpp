#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a, b, c;
    if (n >= 3 && n <= 28) {
      a = 1;
      b = 1;
      c = n - 2;
    } else if (n >= 29 && n <= 53) {
      a = 1;
      b = n - 26 - 1;
      c = 26;
    } else if (n >= 54 && n <= 78) {
      a = n - 52;
      b = 26;
      c = 26;
    }
    cout << char(96 + a) << char(96 + b) << char(96 + c) << endl;
  }
}