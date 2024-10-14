#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

const ll max_n = 16;
const double inf = 1e18;

ll n;
double s, t;
double a[max_n], b[max_n], c[max_n], d[max_n];
double memo[1 << max_n][max_n][2];

double dist(double x1, double y1, double x2, double y2) {
  return hypot(x2 - x1, y2 - y1);
}

double dp(ll mask, ll last, ll end) {
  if (mask == (1 << n) - 1)
    return 0;

  if (memo[mask][last][end] >= 0)
    return memo[mask][last][end];

  double res = inf;
  double lx = (mask == 0) ? 0 : (end ? c[last] : a[last]);
  double ly = (mask == 0) ? 0 : (end ? d[last] : b[last]);

  for (ll i = 0; i < n; i++) {
    if ((mask >> i) & 1)
      continue;

    double move_time = dist(lx, ly, a[i], b[i]) / s;
    double prll_time = dist(a[i], b[i], c[i], d[i]) / t;
    double t1 = move_time + prll_time + dp(mask | (1 << i), i, 1);

    move_time = dist(lx, ly, c[i], d[i]) / s;
    double t2 = move_time + prll_time + dp(mask | (1 << i), i, 0);

    res = min({res, t1, t2});
  }

  return memo[mask][last][end] = res;
}

void solve() {
  cin >> n >> s >> t;
  for (ll i = 0; i < n; i++)
    cin >> a[i] >> b[i] >> c[i] >> d[i];

  memset(memo, -1, sizeof(memo));
  double ans = dp(0, 0, 0);

  cout << fixed << setprecision(20) << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
