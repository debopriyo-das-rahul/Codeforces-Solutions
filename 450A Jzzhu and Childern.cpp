#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  map<int, int> mp;
  queue<int> q;
  int arr[n];
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    q.push(i);
  }
  int ans;
  while (!q.empty()) {
    int x = q.front();
    ans = x;
    if (mp[x] + m >= arr[x]) {
      q.pop();
    } else {
      q.pop();
      mp[x] += m;
      q.push(x);
    }
  }
  cout << ans << endl;
}