#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;
  vector<ll> k(n);
  ll total = 0;

  for (ll i = 0; i < n; ++i) {
    cin >> k[i];
    total += k[i];
  }

  ll result = LLONG_MAX;
  for (ll mask = 0; mask < (1 << n); ++mask) {
    ll A = 0, B = 0;

    for (ll i = 0; i < n; ++i) {
      if (mask & (1 << i))
        A += k[i];
      else
        B += k[i];

    }

    result = min(result, max(A, B));
  }

  cout << result << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}

