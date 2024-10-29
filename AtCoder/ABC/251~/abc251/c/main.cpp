#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  unordered_map<string, pair<ll, ll>> submit;
  ll max_score = LLONG_MIN, idx = -1;

  for (ll i = 0; i < n; i++) {
    string s;
    ll t;
    cin >> s >> t;
    if (submit.find(s) == submit.end()) {
      submit[s] = {i, t};
      if (t > max_score || (t == max_score && i < idx)) {
        max_score = t;
        idx = i;
      }
    }
  }

  cout << idx + 1 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}
