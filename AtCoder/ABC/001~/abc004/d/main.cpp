#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

const ll inf = 1 << 30;

void solve() {
  ll r, g, b, k;
  cin >> r >> g >> b;

  k = r + g + b;
  vector<ll> dp(k + 1, inf);
  dp[0] = 0;
  for (ll i = 0; i < 1 << 11; i++)
    for (ll j = k; j > 0; j--) {
      ll cost = 0;
      if (j <= r)
        cost = abs(i - 900);
      else if (j <= r + g)
        cost = abs(i - 1000);
      else
        cost = abs(i - 1100);
      dp[j] = min(dp[j], dp[j - 1] + cost);
    }

  cout << dp[k] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
