#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++)
    cin >> x[i] >> y[i];

  for (int i = 0; i < n; i++) {
    pair<int, long long> ma;
    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;
        long long tmp = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
        if (tmp > ma.second)
          ma = make_pair(j, tmp);
    }
    cout << ma.first + 1 << endl;
  }
}
