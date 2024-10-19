#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

ll dist(ll from, ll to, ll n, ll fixed) {
  vector<ll> d(n + 1, -1);
  queue<ll> q;

  d[from] = 0;
  q.push(from);

  while (!q.empty()) {
    ll curr = q.front();
    q.pop();

    for (ll next : {curr - 1, curr + 1}) {
      if (next == 0)
        next = n;

      if (next == n + 1)
        next = 1;

      if (next == fixed)
        continue;

      if (d[next] == -1) {
        d[next] = d[curr] + 1;
        q.push(next);
      }
    }
  }

  return d[to];
}

void solve() {
  ll n, q, lpos = 1, rpos = 2, ans = 0;
  cin >> n >> q;

  vector<char> h(q);
  vector<ll> t(q);

  for (ll i = 0; i < q; i++)
  cin >> h[i] >> t[i];

  for (ll i = 0; i < q; i++) {
    ll target = t[i], moves;

    if (h[i] == 'L') {
      if (lpos != target) {
        moves = dist(lpos, target, n, rpos);
        lpos = target;
        ans += moves;
      }
    } else {
      if (rpos != target) {
        moves = dist(rpos, target, n, lpos);
        rpos = target;
        ans += moves;
      }
    }
  }

  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
