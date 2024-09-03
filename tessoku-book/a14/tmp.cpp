#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n), b(n), c(n), d(n);
  for(auto &e : a) cin >> e;
  for(auto &e : b) cin >> e;
  for(auto &e : c) cin >> e;
  for(auto &e : d) cin >> e;

  vector<ll> e, f;
  for(ll i = 0; i < n; i++)
    for(ll j = 0; j < n; j++)
      e.push_back(a[i] + b[j]);

  for(ll i = 0; i < n; i++)
    for(ll j = 0; j < n; j++)
      f.push_back(c[i] + d[j]);

  sort(all(f));
  for(auto x : e) {
    ll pos = lower_bound(all(f), k - x) - f.begin();
    if (pos < f.size() && f[pos] == k - x) {
      cout << "Yes" << endl;
      return;
    }
  }

  cout << "No" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
