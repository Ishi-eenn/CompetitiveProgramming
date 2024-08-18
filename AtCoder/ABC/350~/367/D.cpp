#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, m;
  cin >> n >> m;

  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  vector<ll> cum_sum(n + 1, 0);
  for (ll i = 0; i < n; ++i)
    cum_sum[i + 1] = (cum_sum[i] + a[i]) % m;

  ll count = 0;
  for (ll s = 0; s < n; ++s) {
    for (ll t = 0; t < n; ++t) {
      if (s == t) continue;
      ll distance;
      if (t > s) {
        distance = (cum_sum[t] - cum_sum[s] + m) % m;
      } else {
        distance = (cum_sum[n] - cum_sum[s] + cum_sum[t] + m) % m;
      }
      if (distance == 0)
        count++;
    }
  }

  cout << count << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll t = 1;
  // cin >> t;
  while(t--)
      solve();
}
