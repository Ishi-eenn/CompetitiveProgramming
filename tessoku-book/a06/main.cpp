#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, q;
  cin >> n >> q;

  vector<ll> a(n), l(q), r(q), sum(n + 1, 0);
  for(auto &e : a) cin >> e;
  for(ll i = 0; i < q; i++) cin >> l[i] >> r[i];

  for(ll i = 0; i <= n; i++)
    sum[i + 1] = sum[i] + a[i];

  for(ll i = 0; i < q; i++)
    cout << sum[r[i]] - sum[l[i] - 1] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
