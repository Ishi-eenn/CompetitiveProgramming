#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> s(3);
  string t;
  for(auto &e : s) cin >> e;
  cin >> t;

  for(auto e : t) cout << s[e - '1'];
}
