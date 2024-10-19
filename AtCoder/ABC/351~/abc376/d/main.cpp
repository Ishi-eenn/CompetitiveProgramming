#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, m;
  cin >> n >> m;

  vector<vector<ll>> graph(n + 1);
  for (ll i = 0; i < m; i++) {
    ll a, b;
    cin >> a >> b;
    graph[a].push_back(b);
  }

  vector<ll> dist(n + 1, -1);
  queue<ll> que;
  que.push(1);
  dist[1] = 0;

  ll min_cycle = LLONG_MAX;
  while (!que.empty()) {
    ll v = que.front();
    que.pop();

    for (ll next : graph[v]) {
      if (dist[next] == -1) {
        dist[next] = dist[v] + 1;
        que.push(next);
      } else if (next == 1)
        min_cycle = min(min_cycle, dist[v] + 1);
    }
  }

  if (min_cycle == LLONG_MAX)
    cout << -1 << endl;
  else
    cout << min_cycle << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
