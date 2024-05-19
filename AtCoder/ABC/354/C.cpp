#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, c = 0;
  cin >> n;

  tuple <int, int, int> p[n];
  for (int i = 0; i < n; i++) {
    cin >> get<0>(p[i]) >> get<1>(p[i]);
    get<2>(p[i]) = i + 1;
  }

  sort(p, p + n, [](tuple <int, int, int> a, tuple <int, int, int> b) {
    return get<0>(a) > get<0>(b);
  });

  vector <int> ans;
  ans.push_back(get<2>(p[0]));
  c = get<1>(p[0]);
  for (int i = 1; i < n; i++) {
    if (get<1>(p[i]) < c) {
      ans.push_back(get<2>(p[i]));
      c = get<1>(p[i]);
    }
  }

  sort(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << " ";
}
