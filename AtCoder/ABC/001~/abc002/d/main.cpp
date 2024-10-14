#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  bool con[15][15] = {};
  ll n, m, x, y, ans = 0;
  cin >> n >> m;

  for(ll i = 0; i < m; ++i) {
    cin >> x >> y;
    con[x - 1][y - 1] = con[y - 1][x - 1] = true;
  }

  for(ll S = 1 << n; --S; ) {
    ll t = bitset<32>(S).count();
    if(t <= ans)
      continue;

    bool ok = true;
    for(ll i = 0; i < n; ++i)
      for(ll j = 0; j < i; ++j)
        if(S >> i & S >> j & 1 && !con[i][j])
          ok = false;

    if(ok)
      ans = t;
  }
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
