#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll cnt = 0;
  vector<string> s(12);
  for(auto &e : s) cin >> e;

  for(ll i = 0; i < 12; i++)
    if(s[i].size() == i + 1)
      cnt++;

  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
