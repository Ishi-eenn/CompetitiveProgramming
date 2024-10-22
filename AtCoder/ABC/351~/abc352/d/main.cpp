#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<ll> p(n), q(n);
  for (auto &e : p) cin >> e;

  for (ll i = 0; i < n; i++) q[p[i] - 1] = i;

  set<ll> st;
  for (ll i = 0; i < k; i++) st.insert(q[i]);

  ll ans = *st.rbegin() - *st.begin();

  for (ll i = k; i < n; i++) {
    st.erase(q[i - k]);
    st.insert(q[i]);
    ans = min(ans, *st.rbegin() - *st.begin());
  }

  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
