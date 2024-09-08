#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s, t;
  cin >> s >> t;

  for (int i = 1; i < s.length(); i++) {
    for (int j = 0; j < i; j++) {
      string tmp = "";
      for (int k = j; k < s.length(); k += i)
        tmp.push_back(s[k]);
      if (tmp == t) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
