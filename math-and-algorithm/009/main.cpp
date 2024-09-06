#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, s;
  cin >> n >> s;

  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  vector<vector<ll>> dp(n + 1, vector<ll>(s + 1, 0));
  dp[0][0] = 1;
  for(ll i = 1; i <= n; i++)
    for(ll j = 0; j <= s; j++) {
      if(j < a[i - 1])
        dp[i][j] = dp[i - 1][j];
      else if(dp[i - 1][j - a[i - 1]] == 1 || dp[i - 1][j] == 1)
          dp[i][j] = 1;
    }

  cout << (dp[n][s] == 1 ? "Yes" : "No") << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
