#include <iostream>
using namespace std;
int potassium(int num, int k) {
  int digits[10] = {0};
  while (num > 0) {
    int digit = num % 10;
    digits[digit] = 1;
    num /= 10;
  }
  for (int i = 0; i <= k; i++) {
    if (digits[i] == 0) {
      return 0;
    }
  }
  return 1;
}
int main() {
  int n, k;
  cin >> n >> k;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (potassium(arr[i], k)) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
