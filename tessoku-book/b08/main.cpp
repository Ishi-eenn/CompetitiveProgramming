#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, q;
  cin >> n;

  const ll m = 1500;

  vector< vector<ll> > s(m + 1, vector<ll>(m + 1, 0));

  vector<ll> x(n), y(n);
  for (ll i = 0; i < n; i++) {
    cin >> x[i] >> y[i];

    s[x[i]][y[i]]++;
  }

  for (ll i = 0; i <= m; i++)
    for (ll j = 0; j < m; j++)
      s[i][j + 1] += s[i][j];

  for (ll i = 0; i < m; i++)
    for (ll j = 0; j <= m; j++)
      s[i + 1][j] += s[i][j];

  cin >> q;
  for(ll i = 0; i < q; i++) {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << s[c][d] - s[a - 1][d] - s[c][b - 1] + s[a - 1][b - 1] << endl;
  }


}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
