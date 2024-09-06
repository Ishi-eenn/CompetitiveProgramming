#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<ll> p(n), q(n);
  for(ll i = 0; i < n; i++) cin >> p[i] >> q[i];

  double sum = 0;
  for(ll i = 0; i < n; i++)
    sum += q[i] * 1.0 / p[i];

  cout << fixed << setprecision(12) << sum << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
