#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, q;
  cin >> n;

  vector<ll> x(n), p(n);
  for (ll i = 0; i < n; ++i) cin >> x[i];
  for (ll i = 0; i < n; ++i) cin >> p[i];

  cin >> q;

  vector<ll> cum_sum(n + 1, 0);
  for (ll i = 0; i < n; ++i)
    cum_sum[i + 1] = cum_sum[i] + p[i];

  while (q--) {
    ll l, r;
    cin >> l >> r;

    auto left = lower_bound(all(x), l);
    auto right = upper_bound(all(x), r);

    ll total_population = 0;
    if (left < right)
      total_population = cum_sum[right - x.begin()] - cum_sum[left - x.begin()];

    cout << total_population << '\n';
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
