#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, W, ans = 0;
  cin >> n >> W;

  vector<ll> w(n), v(n);
  for(ll i = 0; i < n; i++) cin >> w[i] >> v[i];

  vector<vector<ll>> dp(n + 1, vector<ll>(W + 1, -1));
  dp[0][0] = 0;
  for(ll i = 1; i <= n; i++)
    for(ll j = 0; j <= W; j++) {
      if(j < w[i - 1])
        dp[i][j] = dp[i - 1][j];
      else
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
    }

  for(ll i = 0; i <= W; i++)
    ans = max(ans, dp[n][i]);

    cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
