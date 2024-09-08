#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n);
  for(auto &e : a)
    cin >> e;

  rotate(a.begin(), a.end() - k, a.end());

  for(const auto &e : a)
    cout << e << " ";
  cout << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
