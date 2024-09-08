#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  vector<string> s(n);
  for(auto &e: s) cin >> e;

  bool ok = true;
  for(int i = 0; i < n; i++) {
    if(s[i] == "sweet") {
      if(ok == false) {
        if(i == n - 1) {
          cout << "Yes" << endl;
          return 0;
        }
        cout << "No" << endl;
        return 0;
      } else
        ok = false;
    } else
      ok = true;
  }
  cout << "Yes" << endl;
}
