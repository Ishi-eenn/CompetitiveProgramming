#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll h, w, n;
  cin >> h >> w >> n;

  vector< vector<ll> > s(h + 2, vector<ll>(w + 2, 0));
  for (ll i = 0; i < n; i++) {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    s[a][b]++;
    s[a][d + 1]--;
    s[c + 1][b]--;
    s[c + 1][d + 1]++;
  }

  for (ll i = 1; i <= h; i++)
    for (ll j = 1; j <= w; j++)
      s[i][j] += s[i][j - 1];

   for (ll i = 1; i <= h; i++)
    for (ll j = 1; j <= w; j++)
      s[i][j] += s[i - 1][j];

  for (ll i = 1; i <= h; i++)
    for (ll j = 1; j <= w; j++)
      cout << s[i][j] << (j == w ? "\n" : " ");
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
