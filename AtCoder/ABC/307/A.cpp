#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, cnt = 0;
  cin >> n;

  vector<int> a(n * 7);
  for (int i = 0; i < n * 7; i++)
    cin >> a[i];

  for (int i = 1; i <= n * 7; i++) {
    cnt += a[i - 1];
    if (i % 7 == 0) {
      cout << cnt << " ";
      cnt = 0;
    }
  }
}
