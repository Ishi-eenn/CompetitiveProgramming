#include <bits/stdc++.h>
using namespace std;

int main() {
  int d, n, sum = 0;

  cin >> d >> n;

  vector<int> t(d + 1, 0), l(n), r(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i] >> r[i];
    t[l[i]]++;
    t[r[i] + 1]--;
  }

  for (int i = 1; i <= d; i++) {
    sum += t[i];
    cout << sum << endl;
  }
}
