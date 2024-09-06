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
  for(auto &e : a) cin >> e;

  vector<ll> dp1(n + 1, 0), dp2(n + 1, 0);
  for(ll i = 1; i <= n; i++) {
    dp1[i] = dp2[i - 1] + a[i - 1];
    dp2[i] = max(dp1[i - 1], dp2[i - 1]);
  }

  cout << max(dp1[n], dp2[n]) << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
