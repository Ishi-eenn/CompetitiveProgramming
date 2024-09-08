#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

const ll MOD = 998244353;

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  vector<ll> dp(n + 1, 0);
  dp[0] = 1;
  vector<ll> cum(n + 1, 0);
  for (ll i = 1; i <= n; ++i)
    cum[i] = cum[i - 1] + a[i - 1];

  for (ll i = 1; i <= n; ++i)
    for (ll j = 0; j < i; ++j) {
      ll sum = cum[i] - cum[j];
      if (sum != k)
        dp[i] = (dp[i] + dp[j]) % MOD;
    }

  cout << dp[n] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
