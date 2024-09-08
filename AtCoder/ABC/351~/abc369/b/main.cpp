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
  vector<char> s(n);
  for(ll i = 0; i < n; ++i)
    cin >> a[i] >> s[i];

  const ll INF = 1e18;
  vector<vector<ll>> dp(n + 1, vector<ll>(101 * 101, INF));
  for (ll left = 1; left <= 100; ++left)
    for (ll right = 1; right <= 100; ++right)
      dp[0][left * 101 + right] = 0;



  for (ll i = 0; i < n; ++i) {
    ll key = a[i];
    char hand = s[i];

    for (ll left = 1; left <= 100; ++left) {
      for (ll right = 1; right <= 100; ++right) {
        ll prev_state = left * 101 + right;

        if (hand == 'L') {
          ll new_state = key * 101 + right;
          dp[i + 1][new_state] = min(dp[i + 1][new_state], dp[i][prev_state] + abs(key - left));
        } else {
          ll new_state = left * 101 + key;
          dp[i + 1][new_state] = min(dp[i + 1][new_state], dp[i][prev_state] + abs(key - right));
        }
      }
    }
  }

  ll result = INF;
  for (ll left = 1; left <= 100; ++left)
    for (ll right = 1; right <= 100; ++right)
      result = min(result, dp[n][left * 101 + right]);

  cout << result << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
