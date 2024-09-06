#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n), b(n);
  for(auto &e : a) cin >> e;
  for(auto &e : b) cin >> e;

  double blue = 0, red = 0;
  for(ll i = 0; i < n; i++) {
    blue += a[i] / (1.0 * n);
    red += b[i] / (1.0 * n);
  }

  cout << fixed << setprecision(12) << blue + red << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
