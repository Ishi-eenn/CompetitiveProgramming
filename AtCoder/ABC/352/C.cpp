#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, max_diff = 0;
  long long sum = 0;

  cin >> n;

  pair<int, int> a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
    sum += a[i].first;
    max_diff = max(max_diff, a[i].second - a[i].first);
  }
  cout << sum + max_diff << endl;
}
