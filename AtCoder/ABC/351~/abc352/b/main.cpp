#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  string s, t;
  cin >> s >> t;

  vector<ll> ans;
  ll cnt = 0;
  for(ll i = 0; i < t.size(); ++i)
    if(s[cnt] == t[i]) {
      ans.push_back(i + 1);
      ++cnt;
    }

  for(ll i = 0; i < ans.size(); ++i)
    cout << ans[i] << " \n"[i == ans.size() - 1];
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
