#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n), b(n);
  vector<pair<int, int> > ans;
  for(int i = 0; i < n; i++){
    cin >> a[i];
    b[a[i] - 1] = i;
  }

  for(int i = 0; i < n; i++) {
    if (a[i] == i + 1)
      continue;
    int tmp_a = i, tmp_b = b[i];
    swap(b[a[i] - 1], b[a[tmp_b] - 1]);
    swap(a[tmp_a], a[tmp_b]);
    ans.emplace_back(tmp_a, tmp_b);
  }

  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i].first + 1 << " " << ans[i].second + 1 << endl;
}
