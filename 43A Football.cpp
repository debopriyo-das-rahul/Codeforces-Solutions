#include <iostream>
#include <string>
using namespace std;
void solve() {
  int n;
  cin >> n;
  string team, winner;
  int goal = 0;
  while (n--) {
    if (goal != 0) {
      cin >> team;
      if (team == winner) {
        goal += 1;
      } else {
        goal -= 1;
      }
    } else {
      cin >> winner;
      goal = 1;
    }
  }
  cout << winner << endl;
}
int main() {
  solve();
  return 0;
}