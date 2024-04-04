#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  int H, M;
  cin >> H >> M;
  int sleeptime = (60 * H) + M;
  int ass = 60 * 24;
  while (n--) {
    int h, m;
    cin >> h >> m;
    int time = (60 * h) + m - sleeptime;
    if (time < 0) {
      time += 24 * 60;
    }
    ass = min(ass, time);
  }
  cout << ass / 60 << " " << ass % 60 << endl;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}