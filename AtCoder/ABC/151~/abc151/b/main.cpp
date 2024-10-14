#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, k, m, sum = 0;
  cin >> n >> k >> m;

  vector<ll> a(n - 1);
  for(auto &e : a) cin >> e;

  for(auto &e : a) sum += e;

  if(sum + k < n * m)
    cout << -1 << endl;
  else if(sum >= n * m)
    cout << 0 << endl;
  else
    cout << n * m - sum << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
