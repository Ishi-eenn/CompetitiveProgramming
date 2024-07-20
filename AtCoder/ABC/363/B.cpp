#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, p, cnt = 0;
  cin >> n >> t >> p;

  vector<int> l(n);
  for (auto &x : l)
    cin >> x;

  sort(l.begin(), l.end());
  reverse(l.begin(), l.end());

  for(auto &x : l)
    if (x >= t)
      cnt++;

  if (cnt >= p)
    cout << 0 << endl;
  else
    cout << t - l[p - 1] << endl;

  return 0;
}
