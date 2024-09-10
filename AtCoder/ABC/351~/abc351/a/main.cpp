#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  vector<ll> a(9), b(8);
  for(auto &e : a) cin >> e;
  for(auto &e : b) cin >> e;

  ll a_sum = accumulate(all(a), 0LL);
  ll b_sum = accumulate(all(b), 0LL);

  cout << a_sum - b_sum + 1 << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
