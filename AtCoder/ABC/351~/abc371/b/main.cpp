#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, m;
  cin >> n >> m;

  vector<bool> is_first(n + 1, false);
  for (ll i = 0; i < m; ++i) {
    ll a;
    char b;
    cin >> a >> b;
    if (b == 'M') {
      if (!is_first[a]) {
        cout << "Yes" << endl;
        is_first[a] = true;
      } else
        cout << "No" << endl;
    } else
    cout << "No" << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
