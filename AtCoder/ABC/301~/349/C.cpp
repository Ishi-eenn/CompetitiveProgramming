#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  transform(s.begin(), s.end(), s.begin(), ::toupper);

  if (t[2] == 'X')
    t.erase(2, 1);

  int cnt = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == t[cnt])
      cnt++;
    if (cnt == t.size()) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
