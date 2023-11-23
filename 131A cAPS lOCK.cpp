#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s;
  char upper;
  bool allupper = true;
  for (int i = 1; i < s.length(); i++) {
    if (islower(s[i])) {
      allupper = false;
    }
  }
  if (allupper) {
    for (int i = 0; i < s.length(); i++) {
      if (islower(s[i])) {
        upper = toupper(s[i]);
      } else {
        upper = tolower(s[i]);
      }
      cout << upper;
    }
  } else {
    cout << s;
  }
}