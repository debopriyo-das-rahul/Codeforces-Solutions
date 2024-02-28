#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, l;
    cin >> a >> b >> l;
    unordered_set<int> ass;
    for (int x = 0; x <= 20; x++) {
      for (int y = 0; y <= 20; y++) {
        int k = l / round((pow(a, x)) * round(pow(b, y)));
        if (k * round(pow(a, x)) * round(pow(b, y)) == l) {
          ass.insert(k);
        }
      }
    }
    cout << ass.size() << endl;
  }
}