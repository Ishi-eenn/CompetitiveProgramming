#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;

  cin >> n >> k;

  vector<int> a(n), b(n, 0);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++) {
    if (i != 0)
      b[i] = b[i - 1];

    while (b[i] < n && a[b[i]] < a[i])
      b[i] += 1;
  }

  long long ans = 0;
  for (int i = 0; i < n; i++)
    ans += b[i] - i;

  cout << ans << endl;
}

// ??????????????????????????////
