#include <bits/stdc++.h>
using namespace std;

int main() {
  bool flag = true;
  string s;
  cin >> s;

  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '|')
      flag = !flag;
    else if(flag)
      cout << s[i];
  }
}
