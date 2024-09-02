#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll t, n;
  cin >> t >> n;

  vector<ll> l(n), r(n), s(t + 1, 0);
  for (ll i = 0; i < n; i++) cin >> l[i] >> r[i];

  for(ll i = 0; i < n; i++) {
    s[l[i]]++;
    s[r[i]]--;
  }

  for(ll i = 1; i <= t; i++)
    s[i] += s[i - 1];

  for(ll i = 0; i < t; i++)
    cout << s[i] << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
