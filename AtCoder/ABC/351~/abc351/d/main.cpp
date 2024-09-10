#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

const ll dx[4] = {0, 0, 1, -1};
const ll dy[4] = {1, -1, 0, 0};

void dfs(ll s, ll v, vector<vector<ll>>& e, vector<ll>& used, ll& cnt) {
  if (used[v] == s) return;

  used[v] = s;
  cnt++;
  ll sz = e[v].size();
  for (ll i = 0; i < sz; i++)
    dfs(s, e[v][i], e, used, cnt);
}

void solve() {
  ll h, w, ans = 0;
  cin >> h >> w;
  vector<string> s(h);
  for (ll i = 0; i < h; i++) cin >> s[i];

  vector<vector<ll>> e(h * w);
  vector<ll> used(h * w, -1);
  for (ll i = 0; i < h; i++) {
    for (ll j = 0; j < w; j++) {
      if (s[i][j] == '#') continue;
      bool can = true;
      for (ll k = 0; k < 4; k++) {
        ll ni = i + dx[k], nj = j + dy[k];
        if (ni >= 0 && ni < h && nj >= 0 && nj < w) {
          e[i * w + j].push_back(ni * w + nj);
          if (s[ni][nj] == '#')
            can = false;
        }
      }
      if (!can)
        e[i * w + j].clear();
    }
  }

  for (ll i = 0; i < h; i++)
    for (ll j = 0; j < w; j++)
      if (s[i][j] == '.' && used[i * w + j] < 0) {
        ll cnt = 0;
        dfs(i * w + j, i * w + j, e, used, cnt);
        ans = max(ans, cnt);
      }

  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
