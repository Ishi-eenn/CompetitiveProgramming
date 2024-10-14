#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  string s, t;
  cin >> s >> t;

  ll n = s.size(), m = t.size();
  ll len = min(n, m);

  for (ll i = 0; i < len; ++i) {
    if (s[i] != t[i]) {
      cout << i + 1 << endl;
      return;
    }
  }

  if (n != m)
    cout << len + 1 << endl;
  else
    cout << 0 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
