#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n), w(n), max_w(n, 0);
  for(auto &e : a) cin >> e;
  for(auto &e : w) cin >> e;

  for(ll i = 0; i < n; i++)
    max_w[a[i] - 1] = max(max_w[a[i] - 1], w[i]);

  ll sum_w = accumulate(all(w), 0LL);
  ll sum_max_w = accumulate(all(max_w), 0LL);
  cout << sum_w - sum_max_w << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
