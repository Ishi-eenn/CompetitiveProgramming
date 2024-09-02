#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for (auto &e : a) cin >> e;

  vector<vector<ll>> dp(n + 1, vector<ll>(2, LLONG_MIN));
  dp[0][0] = 0;

  for (ll i = 0; i < n; ++i) {
    dp[i + 1][0] = max(dp[i + 1][0], dp[i][0]);
    dp[i + 1][1] = max(dp[i + 1][1], dp[i][1]);
    dp[i + 1][1] = max(dp[i + 1][1], dp[i][0] + a[i]);
    dp[i + 1][0] = max(dp[i + 1][0], dp[i][1] + 2 * a[i]);
  }

  ll max_exp = max(dp[n][0], dp[n][1]);

  cout << max_exp << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
