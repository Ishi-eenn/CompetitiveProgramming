#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, min_i = 0;
  cin >> n;
  vector<int> p(n);
  for (auto &e : p) cin >> e;

  for(int i = 1; i < n; i++)
    min_i = max(min_i, p[i]);

  cout << max(0, min_i - p[0] + 1) << endl;
}
