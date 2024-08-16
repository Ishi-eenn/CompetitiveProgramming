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
  for(auto &e : h) cin >> e;

  for(ll i = 0; i < n; i++) {
    if(h[i] >= h[i + 1]) {
      cout << h[i] << endl;
      return;
    }
  }

  cout << h[n] << endl;
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
