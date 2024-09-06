#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  double ans = 0;
  for(ll i = n; i > 0; i--)
    ans += 1.0 * n / i;

  cout << fixed << setprecision(12) << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
