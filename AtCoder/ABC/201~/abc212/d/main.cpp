#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll q;
  cin >> q;

  map<ll, ll> mp;
  ll cnt = 0;
  for(ll i = 0; i < q; i++) {
    ll n, x;
    cin >> n;

    if(n == 1) {
      cin >> x;
      mp[x - cnt]++;
    } else if(n == 2) {
      cin >> x;
      cnt += x;
    } else {
      cout << cnt + mp.begin()->first << endl;
      mp.begin()->second--;
      if(mp.begin()->second == 0)
        mp.erase(mp.begin());
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
