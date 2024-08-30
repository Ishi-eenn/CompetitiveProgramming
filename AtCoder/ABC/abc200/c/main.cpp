#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, cnt = 0;
  cin >> n;

  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  vector<ll> rem_cnt(200, 0);
  for(ll i = 0; i < n; i++) {
    ll rem = a[i] % 200;
    cnt += rem_cnt[rem];
    rem_cnt[rem]++;
  }

  cout << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
