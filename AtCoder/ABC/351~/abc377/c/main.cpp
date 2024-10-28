#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<ll> a(m), b(m), bord;
    for (ll i = 0; i < m; i++) cin >> a[i] >> b[i];

    vector<pair<ll, ll>> move = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};

    for(ll i = 0; i < m; i++) {
      bord.push_back(a[i] * (n + 1) + b[i]);
      for(auto &[dx, dy] : move) {
        ll x = a[i] + dx, y = b[i] + dy;
        if(1 <= x && x <= n && 1 <= y && y <= n)
          bord.push_back(x * (n + 1) + y);
      }
    }

    sort(all(bord));
    bord.erase(unique(all(bord)), bord.end());

    cout << n * n - bord.size() << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
