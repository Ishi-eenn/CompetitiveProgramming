#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  string s;
  cin >> s;

  for (string t : {"oxx", "xox", "xxo"}) {
    bool ok = true;
    for (ll i = 0; i < (int)s.size(); i++)
      if (t[i % 3] != s[i])
        ok = false;

    if (ok) {
      cout << "Yes" << endl;
      return;
    }
  }
  cout << "No" << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t = 1;
  // cin >> t;
  while(t--)
    solve();

  return 0;
}
