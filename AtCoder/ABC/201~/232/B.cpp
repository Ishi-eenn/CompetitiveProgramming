#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  string s, t;
  cin >> s >> t;

  for(ll k = 0; k <= 25; k++) {
    string s2 = s;

    for(ll i = 0; i < s.size(); i++)
      s2[i] = ((s2[i] - 'a') + k) % 26 + 'a';

    if(s2 == t) {
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
