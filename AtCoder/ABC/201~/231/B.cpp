#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  map<string, ll> mp;
  for (ll i = 0; i < n; ++i) {
    string s;
    cin >> s;
    mp[s]++;
  }

  pair<string, ll> ans = {"", 0};
  for(auto [key, value] : mp)
    if(value > ans.second)
      ans = {key, value};

  cout << ans.first << endl;
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
