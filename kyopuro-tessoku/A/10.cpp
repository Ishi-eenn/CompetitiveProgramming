#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d;

  cin >> n;
  vector<int> a(n), l_max(n + 1, 0), r_max(n + 1, 0);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cin >> d;
  vector<int> l(d), r(d);
  for (int i = 0; i < d; i++)
    cin >> l[i] >> r[i];

  for (int i = 0; i < n; i++)
    l_max[i + 1] = max(l_max[i], a[i]);

  for (int i = n - 1; i >= 0; i--)
    r_max[i] = max(r_max[i + 1], a[i]);

  for (int i = 0; i < d; i++)
    cout << max(l_max[l[i] - 1], r_max[r[i]]) << endl;
}
