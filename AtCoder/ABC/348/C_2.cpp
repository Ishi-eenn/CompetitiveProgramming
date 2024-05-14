#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, int> beans;
  for (int i = 0; i < n; ++i) {
    int a, c;
    cin >> a >> c;

    if (beans.contains(c))
      beans[c] = min(beans[c], a);
    else
      beans[c] = a;
  }

  int ans = -1;
  for (auto [c, val] : beans){
    ans = max(ans, val);
  }

  cout << ans << endl;
}
