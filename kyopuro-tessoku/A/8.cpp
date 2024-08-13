#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll h, w, q;
  cin >> h >> w;
  vector<vector<ll>> x(h, vector<ll>(w)), sum(h + 1, vector<ll>(w + 1, 0));
  for (ll i = 0; i < h; i++)
    for (ll j = 0; j < w; j++)
      cin >> x[i][j];

  cin >> q;
  vector<ll> a(q), b(q), c(q), d(q);
  for (ll i = 0; i < q; i++)
    cin >> a[i] >> b[i] >> c[i] >> d[i];

  for(ll i = 0; i < h; i++)
    for(ll j = 0; j < w; j++)
      sum[i + 1][j + 1] = sum[i + 1][j] + sum[i][j + 1] - sum[i][j] + x[i][j];

  for(ll i = 0; i < q; i++)
    cout << sum[c[i]][d[i]] - sum[a[i] - 1][d[i]] - sum[c[i]][b[i] - 1] + sum[a[i] - 1][b[i] - 1] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t = 1;
  // cin >> t;
  while(t--)
    solve();

  return 0;
}
