#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, q, min;

  cin >> n >> p >> q;

  min = p;
  vector<int> d(n);
  for (auto &e : d) cin >> e;

  for(int i = 0; i < n; i++)
    if(min > q + d[i])
      min = q + d[i];

  cout << min << endl;
}
