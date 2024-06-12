#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;

  cin >> n >> q;
  vector<int> a(n), l(q), r(q), t(n + 1, 0);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    t[i + 1] = t[i] + a[i];
  }

  for (int i = 0; i < q; i++)
    cin >> l[i] >> r[i];

  for (int i = 0; i < q; i++)
    cout << t[r[i]] - t[l[i] - 1] << endl;
}
