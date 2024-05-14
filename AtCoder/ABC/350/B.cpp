#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q, t, cnt = 0;
  cin >> n  >> q;

  vector<int> ha(n, 1);
  for (int i = 0; i < q; i++) {
    cin >> t;
    ha[t - 1]++;
  }

  for (int i = 0; i < n; i++)
    if (ha[i] % 2 == 1)
      cnt++;

  cout << cnt << endl;
}
