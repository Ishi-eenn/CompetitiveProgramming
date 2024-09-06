#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

ll f(ll n) {
  return n * (n - 1) / 2;
}

void solve() {
  ll n;
  cin >> n;

  map<ll, ll> mp;
  for(ll i = 0; i < n; i++) {
    ll a;
    cin >> a;

    mp[a]++;
  }

  cout << f(mp[1]) + f(mp[2]) + f(mp[3]) << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
