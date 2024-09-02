#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n;
  cin >> n;

  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  if (n == 1) {
    cout << 1 << endl;
    return;
  }

  ll count = n, len = 1;

  for (ll i = 1; i < n; ++i) {
    if (i == 1 || a[i] - a[i - 1] == a[i - 1] - a[i - 2])
      len++;
    else
      len = 2;
    count += (len - 1);
  }

  cout << count << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
