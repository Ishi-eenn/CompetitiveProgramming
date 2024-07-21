#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long sumX = 0;

  cin >> n;

  vector<int> l(n), r(n);
  vector<long long> x(n);
  for (int i = 0; i < n; i++)
    cin >> l[i] >> r[i];

  if (accumulate(l.begin(), l.end(), 0LL) > 0 || accumulate(r.begin(), r.end(), 0LL) < 0) {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i < n; i++) {
    x[i] = l[i];
    sumX += x[i];
  }

  for (int i = 0; i < n; i++) {
    long long d = min((long long)(r[i] - l[i]), - sumX);
    sumX += d;
    x[i] += d;
  }

  cout << "Yes" << endl;
  for (int i = 0; i < n; i++)
    cout << x[i] << (i == n-1 ? '\n' : ' ');

  return 0;
}
