#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(4 * n - 1);
  for(auto &e : a) cin >> e;

  map<ll, ll> trump;
  for(auto &e : a) trump[e]++;

  for(ll i = 1; i <= n; i++)
    if(trump[i] == 3)
      cout << i << endl;
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
