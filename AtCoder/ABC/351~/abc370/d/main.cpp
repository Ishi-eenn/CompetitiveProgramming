#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll h, w, q;
  cin >> h >> w >> q;

  vector<set<ll>> rows(h + 1), cols(w + 1);
  for (ll i = 1; i <= h; ++i)
    for (ll j = 1; j <= w; ++j) {
        rows[i].insert(j);
        cols[j].insert(i);
  }

  for (ll i = 0; i < q; ++i) {
    ll r, c;
    cin >> r >> c;

    if (rows[r].count(c)) {
      rows[r].erase(c);
      cols[c].erase(r);
    } else {
      auto it = cols[c].lower_bound(r);
      if (it != cols[c].begin()) {
        --it;
        rows[*it].erase(c);
        cols[c].erase(it);
      }
      it = cols[c].lower_bound(r + 1);
      if (it != cols[c].end()) {
        rows[*it].erase(c);
        cols[c].erase(it);
      }
      it = rows[r].lower_bound(c);
      if (it != rows[r].begin()) {
        --it;
        cols[*it].erase(r);
        rows[r].erase(it);
      }
      it = rows[r].lower_bound(c + 1);
      if (it != rows[r].end()) {
        cols[*it].erase(r);
        rows[r].erase(it);
      }
    }
  }

  ll remaing = 0;
  for (ll i = 1; i <= h; ++i)
    remaing += rows[i].size();

  cout << remaing << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
