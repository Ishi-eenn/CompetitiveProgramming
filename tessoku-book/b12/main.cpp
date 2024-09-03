#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  double l = 0, r = n;
  while(r - l > 0.0001) {
    double m = (l + r) / 2;

    if(m * m * m + m <= 1.0 * n)
      l = m;
    else
      r = m;
  }

  cout << fixed << setprecision(6) << l << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
