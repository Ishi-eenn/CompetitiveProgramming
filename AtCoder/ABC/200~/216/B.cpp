#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n), t(n), ans(n);
  for(int i = 0; i < n; i++) {
    cin >> s[i] >> t[i];
    ans[i] = s[i] + " " + t[i];
  }

  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(ans[i] == ans[j]) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
