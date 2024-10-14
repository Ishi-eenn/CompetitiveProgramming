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
  for (ll i = 0; i < n; ++i)
    cin >> a[i];

  vector<ll> l(n + 1, -1);
  vector<ll> dp(n + 1, 0);

  ll r = 0;
  for (ll i = 0; i < n; ++i) {
    ll p = l[a[i]];
    dp[i + 1] = dp[i] + (i - p);
    l[a[i]] = i;
    r += dp[i + 1];
  }

  cout << r << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
