#include <algorithm>
#include <iostream>
using namespace std;
void solve() {
  char grid[8][8];
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cin >> grid[i][j];
    }
  }
  int red = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (grid[i][j] == 'R') {
        red++;
      }
    }
    if (red == 8) {
      break;
    } else {
      red = 0;
    }
  }
  if (red == 8) {
    cout << "R" << endl;
  } else {
    cout << "B" << endl;
  }
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}