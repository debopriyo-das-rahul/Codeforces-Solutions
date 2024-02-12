#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      s.insert(a);
    }
    vector<int> vec;
    for (int x : s) {
      vec.push_back(x);
    }
    int bal = 1, index = 0;
    int ass = 1;
    for (int i = 1; i < vec.size(); i++) {
      if ((vec[i] - vec[index]) < n) {
        bal++;
      } else {
        index++;
      }
      ass = max(ass, bal);
    }
    cout << ass << endl;
  }
}