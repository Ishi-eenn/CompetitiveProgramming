#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, c, last, candies = 1;
  cin >> n >> c;

  vector<ll> t(n);
  for(auto &e : t)
    cin >> e;

  last = t[0];

  for (ll i = 1; i < n; i++)
    if (t[i] - last >= c) {
      candies++;
      last = t[i];
    }

  cout << candies << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
