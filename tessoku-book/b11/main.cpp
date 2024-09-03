#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, q;
  cin >> n;

  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  cin >> q;
  vector<ll> x(q);
  for(auto &e : x) cin >> e;

  sort(all(a));

  for(ll i = 0; i < q; i++) {
    ll pos = lower_bound(all(a), x[i]) - a.begin();
    cout << pos << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
