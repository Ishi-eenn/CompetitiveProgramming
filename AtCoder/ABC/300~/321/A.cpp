#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for(int i = 0; i < s.size() - 1; i++) {
    if(s[i] <= s[i + 1]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
