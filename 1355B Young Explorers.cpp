#include <algorithm>
#include <iostream>

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    int g = 0;
    int s = 0;
    for (int i = 0; i < n; i++) {
      s++;
      if (s >= arr[i]) {
        g++;
        s = 0;
      }
    }
    cout << g << endl;
  }
}