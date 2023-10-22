#include <cmath>
#include <iostream>
using namespace std;
void solve() {
  long long int n, sum = 1, k = 1;
  cin >> n;
  while (1) {
    sum += pow(2, k++);
    if (n % sum == 0) {
      cout << n / sum << endl;
      break;
    }
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