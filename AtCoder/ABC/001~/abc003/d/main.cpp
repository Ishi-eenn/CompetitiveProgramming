#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll mod = 1e9 + 7;
  ll r, c, x, y, d, l, sum = 0;
  cin >> r >> c >> x >> y >> d >> l;

  vector<vector<ll>> comb(1000, vector<ll>(1000, 0));
  for (ll i = 0; i < 1000; i++) {
    comb[i][0] = 1;
    for (ll j = 1; j <= i; j++)
      comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j]) % mod;
  }

  for(ll i = 0; i < 1 << 4; i++) {
    ll bit = bitset<32>(i).count(), tx = x, ty = y;
    if ((i >> 0) & 1)
      tx--;
    if ((i >> 1) & 1)
      tx--;
    if ((i >> 2) & 1)
      ty--;
    if ((i >> 3) & 1)
      ty--;
    if (tx < 0 || ty < 0 || tx * ty < d + l)
      continue;
    if(bit % 2 == 0)
      sum += comb[tx * ty][d + l] * comb[d + l][d] % mod;
    else
      sum -= comb[tx * ty][d + l] * comb[d + l][d] % mod;
    sum = (sum + mod) % mod;
  }

  sum = sum * (r - x + 1) % mod * (c - y + 1) % mod;
  cout << sum << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
