#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n), tmp(n), ans(n);
  for(auto &e : a) cin >> e;

  tmp = a;
  sort(all(tmp));
  tmp.erase(unique(all(tmp)), tmp.end());

  for(ll i = 0; i < n; i++) {
    ll pos = lower_bound(all(tmp), a[i]) - tmp.begin();
    ans[i] = pos + 1;
  }

  for(ll i = 0; i < n; i++)
    cout << ans[i] << (i == n - 1 ? '\n' : ' ');
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
