#include <bits/stdc++.h>
using namespace std;

int main() {
  const int n = 3;
  vector<string> s(n), ans = {"ABC", "ARC", "AGC", "AHC"};
  for(auto &e : s) cin >> e;

  for(auto &e : ans) {
    if(find(s.begin(), s.end(), e) == s.end()) {
      cout << e << endl;
      return 0;
    }
  }
}
