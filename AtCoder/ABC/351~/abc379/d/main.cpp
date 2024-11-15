#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

namespace Ishi_eenn
{
  void solve() {
    ll q;
    cin >> q;

    vector<ll> tree;
    ll idx = 0, curr = 0;
    while(q--) {
      ll query;
      cin >> query;
      if(query == 1)
        tree.push_back(curr);
      else if(query == 2) {
        ll t;
        cin >> t;
        curr += t;
      }
      else if(query == 3) {
        ll h;
        cin >> h;
        ll target = curr - h;
        ll new_index = upper_bound(tree.begin() + idx, tree.end(), target) - tree.begin();
        ll ans = new_index - idx;
        idx = new_index;
        cout << ans << endl;
      }
    }
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
