#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<ll> h(n);
  for(auto &e : h)
    cin >> e;

  ll t = 0;
  for (ll i = 0; i < n; ++i) {
    while (h[i] >= 1) {
      while (t % 3 != 0 && h[i] >= 1) {
        ++t;
        if (t % 3 == 0)
            h[i] -= 3;
        else
            --h[i];
      }
      if (h[i] >= 5) {
        t += (h[i] / 5) * 3;
        h[i] %= 5;
      } else if (h[i] == 4) {
        t += 3;
        h[i] = 0;
      } else if (h[i] > 0) {
        t += h[i];
        h[i] = 0;
      }
    }
  }

  cout << t << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
