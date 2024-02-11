#include <iostream>
using namespace std;
int main() {
  long long a, b, c;
  cin >> a >> b >> c;
  long long x = (a + b) / c;
  long long y = 0;
  if ((a % c) + (b % c) >= c) {
    y = min(c - (a % c), c - (b % c));
  }
  cout << x << " " << y << endl;
}