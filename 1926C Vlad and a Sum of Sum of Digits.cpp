#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
long long ass[N];
long long dig(long long n) {
  long long sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
void precompute() {
  for (int i = 1; i <= N; i++) {
    ass[i] = ass[i - 1] + dig(i);
  }
}
int main() {
  precompute();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << ass[n] << endl;
  }
  return 0;
}