#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, d;
  cin >> n;

  vector<ll> a(n), lm(n + 1, 0), rm(n + 1, 0);
  for(auto &e : a) cin >> e;

  cin >> d;
  vector<ll> l(d), r(d);
  for (ll i = 0; i < d; i++) cin >> l[i] >> r[i];

  for (ll i = 0; i < n; i++)
    lm[i + 1] = max(lm[i], a[i]);

  for (ll i = n - 1; i >= 0; i--)
    rm[i] = max(rm[i + 1], a[i]);

  for(ll i = 0; i < d; i++)
    cout << max(lm[l[i] - 1], rm[r[i]]) << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
