#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, k, ans = 0;
  cin >> n >> k;

  vector<ll> a(n), r(n);
  for(auto &e : a) cin >> e;

  for(ll i = 1; i < n; i++) {
    if (i == 1)
      r[i] = 1;
    else
      r[i] = r[i - 1];

    while(r[i] < n && a[r[i]] - a[i - 1] <= k)
      r[i]++;
  }

  for(ll i = 1; i < n; i++)
    ans += r[i] - i;
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
