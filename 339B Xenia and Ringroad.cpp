#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int pos = 1;
  long long int t = 0;
  for (int i = 0; i < m; i++) {
    int a;
    cin >> a;
    if (a >= pos) {
      t += a - pos;
    } else {
      t += n - pos + a;
    }
    pos = a;
  }
  cout << t << endl;
}