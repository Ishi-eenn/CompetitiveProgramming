#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, int> beans;
  for (int i = 0; i < n; ++i) {
    int a, c;
    cin >> a >> c;

    auto it = beans.find(c);
    if (it != beans.end()) {
      it->second = min(it->second, a);
    } else {
      beans[c] = a;
    }
  }

  int ans = -1;
  for (auto it = beans.begin(); it != beans.end(); ++it) {
    ans = max(ans, it->second);
  }

  cout << ans << endl;
}
