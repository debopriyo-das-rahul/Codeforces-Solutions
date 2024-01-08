#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      if (s[i] == '+') {
        v[i] = 1;
      } else {
        v[i] = -1;
      }
    }
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      sum += v[i];
    }
    if (sum < 0) {
      cout << -1 * sum << endl;
    } else {
      cout << sum << endl;
    }
  }
}