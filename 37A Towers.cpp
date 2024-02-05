#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int h = 1, count = 0, height = 1;
  for (int i = 1; i <= n; i++) {
    if (arr[i] == arr[i - 1]) {
      h++;
      if (h > height) {
        height = h;
      }
    } else {
      h = 1;
      count++;
    }
  }
  cout << height << " " << count << endl;
}