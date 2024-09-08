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
  for(ll i = 0; i < n; i++)
    cin >> a[i];

  ll total = 1, invalid = 0;

  for (ll mask = 0; mask < (1 << (n - 1)); mask++) {
    bool is_valid = true;
    ll current_sum = 0;
    for (ll i = 0; i < n; i++) {
      current_sum += a[i];

      if (i < n - 1 && (mask & (1 << i))) {
        if (current_sum == k)
          is_valid = false;
        current_sum = 0;
      }
    }
    if (current_sum == k)
      is_valid = false;
    if (!is_valid)
      invalid++;
  }

  total = (1LL << (n - 1));
  ll result = (total - invalid + MOD) % MOD;
  cout << result << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
