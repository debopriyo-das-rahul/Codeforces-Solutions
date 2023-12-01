#include <algorithm>
#include <iostream>
using namespace std;
void win(int s, int n, pair<int, int> drg[]) {
  sort(drg, drg + n);
  int drg_str, bonus;
  for (int i = 0; i < n; i++) {
    drg_str = drg[i].first;
    bonus = drg[i].second;
    if (s > drg_str) {
      s += bonus;
    } else {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}
int main() {
  int s, n;
  cin >> s >> n;
  pair<int, int> drg[n];
  for (int i = 0; i < n; i++) {
    cin >> drg[i].first >> drg[i].second;
  }
  win(s, n, drg);
}