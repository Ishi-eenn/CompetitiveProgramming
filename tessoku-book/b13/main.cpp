#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, k, ans = 0;
  cin >> n >> k;

  vector<ll> a(n), s(n + 1), r(n);
  for(auto &e : a) cin >> e;

  for(ll i = 0; i < n; i++)
    s[i + 1] = s[i] + a[i];

  for(ll i = 0; i < n; i++) {
    if(i == 0)
      r[0] = 0;
    else
      r[i] = r[i - 1];

    while(r[i] < n && s[r[i] + 1] - s[i] <= k)
      r[i]++;
  }

  for(ll i = 0; i < n; i++)
    ans += r[i] - i;

  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
