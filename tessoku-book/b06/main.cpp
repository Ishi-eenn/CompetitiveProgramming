#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, q;
  cin >> n;

  vector<ll> a(n), atari(n + 1, 0), hazure(n + 1, 0);
  for(auto &e : a) cin >> e;

  cin >> q;

  vector<ll> l(q), r(q);
  for (ll i = 0; i < q; i++) cin >> l[i] >> r[i];

  for(ll i = 0; i < n; i++) {
    atari[i + 1] = atari[i];
    hazure[i + 1] = hazure[i];

    if(a[i] == 1)
      atari[i + 1]++;
    else
      hazure[i + 1]++;
  }

  for(ll i = 0; i < q; i++) {
    ll s_atari = atari[r[i]] - atari[l[i] - 1];
    ll s_hazure = hazure[r[i]] - hazure[l[i] - 1];

    if (s_atari > s_hazure)
      cout << "win" << endl;
    else if (s_atari < s_hazure)
      cout << "lose" << endl;
    else
      cout << "draw" << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
