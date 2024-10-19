#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll t, n, m, cnt = 0;
  cin >> t >> n;

  vector<ll> a(n);
  for(auto &e : a) cin >> e;

  cin >> m;
  vector<ll> b(m);
  for(auto &e : b) cin >> e;

  bool ans;
  for(int i = 0; i < n; i++)
    if(a[i] + t >= b[cnt] && a[i] <= b[cnt])
      cnt++;
  ans = (m == cnt);

  cout << (ans ? "yes" : "no") << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
