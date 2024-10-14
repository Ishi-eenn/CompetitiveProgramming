#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n, m, cnt = 0;
  cin >> n >> m;

  map<ll, ll> ac, wa;

  for(ll i = 0; i < m; ++i) {
    ll a;
    string b;
    cin >> a >> b;

    if(b == "WA") wa[a]++;
    else if(b == "AC" && !ac.count(a)) {
      ac[a]++;
      cnt += wa[a];
    }
  }

  cout << ac.size() << " " << cnt << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
