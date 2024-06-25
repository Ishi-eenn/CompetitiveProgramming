#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;

  cin >> n >> x;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  auto it = lower_bound(a.begin(), a.end(), x);

  cout << distance(a.begin(), it) + 1 << endl;
}
