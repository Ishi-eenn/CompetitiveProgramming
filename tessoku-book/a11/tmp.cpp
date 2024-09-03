#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, x;
  cin >> n >> x;

  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  ll l = 0, r = n - 1;
  while(l <= r) {
    ll m = (l + r) / 2;

    if(a[m] == x) {
      cout << m + 1 << endl;
      return;
    } else if(a[m] < x)
      l = m + 1;
     else
      r = m - 1;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
