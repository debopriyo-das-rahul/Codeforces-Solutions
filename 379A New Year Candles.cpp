#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  int hours = a;
  while (a >= b) {
    if (a % b == 0) {
      a /= b;
      hours += a;
    } else {
      int temp = a;
      a /= b;
      hours += a;
      a += temp % b;
    }
  }
  cout << hours << endl;
  return 0;
}