#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, x, y;
  cin >> n >> x >> y;

  ll x_cnt = n / x;
  ll y_cnt = n / y;
  ll xy_cnt = n / lcm(x, y);

  cout << x_cnt + y_cnt - xy_cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
