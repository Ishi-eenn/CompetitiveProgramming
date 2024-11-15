#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

namespace Ishi_eenn
{
  void solve() {
    ll n, m;
    cin >> n >> m;

    vector<ll> x(m), a(m);
    for(auto &e : x) cin >> e;
    for(auto &e : a) cin >> e;

    vector<pair<ll, ll>> stone(m);
    ll total = 0;
    for(ll i = 0; i < m; i++) {
      stone[i] = {x[i], a[i]};
      total += a[i];
    }

    if(total != n) {
      cout << -1 << endl;
      return;
    }

    sort(all(stone));

    ll ans = 0, excess = 0, lstidx = 0;

    for(ll i = 0; i < m; i++) {
      ll pos = stone[i].first;
      ll cnt = stone[i].second;

      ll gap = pos - lstidx - 1;
      if(gap > 0){
        if(excess < gap){
          cout << -1 << endl;
          return;
        }
        ans += gap * excess - (gap * (gap + 1)) / 2;
        excess -= gap;
      }

      ll curr = excess + cnt;

      if(curr < 1){
        cout << -1 << endl;
        return;
      }

      excess = curr - 1;
      ans += excess;
      lstidx = pos;
    }

    ll idx = n - lstidx;
    if(idx > 0){
      if(excess < idx){
        cout << -1 << endl;
        return;
      }
      ans += idx * excess - (idx * (idx + 1)) / 2;
      excess -= idx;
    }

    if(excess > 0){
      cout << -1 << endl;
      return;
    }

    cout << ans << endl;
  }

  inline void Main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
  }
}

signed main() {
  Ishi_eenn::Main();
  return 0;
}
