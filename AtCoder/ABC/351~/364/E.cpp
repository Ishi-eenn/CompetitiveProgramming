#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  pair<int, int> a[n];
  for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;

  sort(a, a + n, [](pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
  });

  for (int i = 0; i < n; i++) {
    cout << a[i].first << " " << a[i].second << endl;
  }
}
