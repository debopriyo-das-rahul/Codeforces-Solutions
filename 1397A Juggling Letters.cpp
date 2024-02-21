#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int freq[26] = {0};
    int x = n;
    while (x--) {
      string s;
      cin >> s;
      for (int i = 0; i < s.length(); i++) {
        freq[s[i] - 'a']++;
      }
    }

    bool valid = true;
    for (int i = 0; i < 26; i++) {
      if (freq[i] % n != 0) {
        valid = false;
      }
    }
    if (valid) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
