#include <bits/stdc++.h>
using namespace std;

#define int ll
#define ll long long
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

void solve() {
  ll n = 8;
  vector<string> s(n);
  for(auto &e : s) cin >> e;

  map<ll, ll> mp_x, mp_y;
  for(ll i = 0; i < n; i++)
    for(ll j = 0; j < n; j++)
      if(s[i][j] == '#') {
        mp_x[i]++;
        mp_y[j]++;
      }

  cout << (n - mp_x.size()) * (n - mp_y.size()) << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}
