#include <cstring>
#include <iostream>

using namespace std;
char keyboard[50] = "qwertyuiopasdfghjkl;zxcvbnm,./";
int main() {
  char ch;
  cin >> ch;
  string s;
  cin >> s;
  if (ch == 'R') {
    for (int i = 0; i < s.length(); i++) {
      for (int j = 0; j < strlen(keyboard); j++) {
        if (s[i] == keyboard[j]) {
          cout << keyboard[j - 1];
        }
      }
    }
  } else {
    for (int i = 0; i < s.length(); i++) {
      for (int j = 0; j < strlen(keyboard); j++) {
        if (s[i] == keyboard[j]) {
          cout << keyboard[j + 1];
        }
      }
    }
    return 0;
  }
}