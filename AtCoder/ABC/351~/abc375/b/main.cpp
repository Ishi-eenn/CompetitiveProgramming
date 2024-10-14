#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, x, y, tmp_x = 0, tmp_y = 0;
  cin >> n;

  double ans = 0;
  for (ll i = 0; i < n; ++i) {
    cin >> x >> y;
    ans += hypot(x - tmp_x, y - tmp_y);
    tmp_x = x;
    tmp_y = y;
  }
  cout << fixed << setprecision(10) << ans + hypot(tmp_x, tmp_y) << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
