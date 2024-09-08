#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, m;
  cin >> n >> m;

  vector<ll> a(n), b(m);
  for(auto &e : a) cin >> e;
  for(auto &e : b) cin >> e;

  sort(all(a));
  sort(all(b));

  ll min_diff = 1e18;
  for (int i = 0; i < n; ++i) {
    auto it = lower_bound(b.begin(), b.end(), a[i]);

    if (it != b.end())
      min_diff = min(min_diff, abs(a[i] - *it));

    if (it-- != b.begin())
      min_diff = min(min_diff, abs(a[i] - *it));
  }

  cout << min_diff << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
