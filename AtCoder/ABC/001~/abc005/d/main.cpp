#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, q, x, ma_x = 0;
  cin>>n;

  vector<vector<ll>> d(n + 1, vector<ll>(n + 1));
  vector<vector<ll>> f(n + 1, vector<ll>(n + 1));
  vector<ll> ans(n * n + 1);

  for(ll i = 1; i <= n; i++)
    for(ll j = 1; j <= n; j++) {
      cin >> d[i][j],
      d[i][j] = d[i][j] + d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1];
    }

  cin >> q;

  vector<ll> p(q);
  for(auto &e : p) cin >> e;

  for(ll i = 1; i <= n; i++)
    for(ll j = 1; j <= n; j++)
      for(ll x = 1; x <= n - i + 1; x++)
        for(ll y = 1; y <= n - j + 1; y++)
          f[i][j]=max(f[i][j], d[x + i - 1][y + j - 1] - d [x - 1][y + j - 1] - d[x + i - 1][y - 1] + d[x - 1][y - 1]);

  for(ll x = 1; x <= n * n; x++) {
    ans[x]=ma_x;
    for(ll i = sqrt(x); i >= 1; i--)
      if(!(x % i) && x / i <= n) {
        ans[x]=max(ans[x],f[i][x / i]);
        ans[x]=max(ans[x],f[x / i][i]);
      }
      else if(!(x % i))
        break;
    ma_x=ans[x];
  }

  for(ll i = 0; i < q; i++)
    cout << ans[p[i]] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
