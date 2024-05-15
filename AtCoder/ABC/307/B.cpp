#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string join;
  cin >> n;

  vector<string> s(n);
  for (int i = 0; i < n; i++)
    cin >> s[i];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j) {
        join = s[i] + s[j];
        if (join == string(join.rbegin(), join.rend())) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
}
