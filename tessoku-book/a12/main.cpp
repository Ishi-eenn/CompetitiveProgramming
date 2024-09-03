#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  ll l = 0, r = 1000000000;
  while(l < r) {
    ll m = (l + r) / 2;

    ll s = 0;
    for(ll i = 0; i < n; i++)
      s += m / a[i];

    if(s >= k)
      r = m;
    else
      l = m + 1;
  }

  cout << l << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
