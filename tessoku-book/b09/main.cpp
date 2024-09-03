#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, ans = 0;
  const ll max = 1500;
  cin >> n;

  vector< vector<ll> > s(max + 2, vector<ll>(max + 2, 0));
  for(ll i = 0; i < n; i++) {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    s[a][b]++;
    s[a][d]--;
    s[c][b]--;
    s[c][d]++;
  }

  for(ll i = 0; i <= max; i++)
    for(ll j = 1; j <= max; j++)
      s[i][j] += s[i][j - 1];

  for(ll i = 1; i <= max; i++)
    for(ll j = 0; j <= max; j++)
      s[i][j] += s[i - 1][j];

  for(ll i = 0; i <= max; i++)
    for(ll j = 0; j <= max; j++)
      if(s[i][j] > 0)
        ans++;

  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
